
using System;
using UnityEngine;
using System.IO;
using System.Collections.Generic;

/*
 *
 * You only need to attach this class to your AudioListener's game object
 * if you programmatically create an AudioListener. Othewise, Kamcord
 * will automatically bind to FMOD and record the audio byte stream.
 *
 */
public class TestAudioRecorder : MonoBehaviour
{
	
	private FileStream fileStream;
	private int headerSize = 44; //default for uncompressed wav
	private int outputRate = 44100;
	
	private int bufferSize;
    private int numBuffers;
	private int channels = 2;

	
	void Awake ()
	{
		AudioSettings.outputSampleRate = outputRate;
	}
	
	void Start ()
	{
		AudioSettings.GetDSPBufferSize(out bufferSize, out numBuffers);
		Debug.Log("bufferSize = " + bufferSize);
		Debug.Log("numBuffers = " + numBuffers);
		StartWriting("test.wav");
	}
	
	void OnApplicationQuit ()
	{
		WriteHeader();		
		Debug.Log ("LuYou OnApplicationQuit");
	}
	
	void OnAudioFilterRead (float[] data, int channels)
	{
		Debug.Log ("OnAudioFilterRead");
		if (data.Length > 0) {
			this.channels = channels;
			ConvertAndWrite (data);
		} else {
			Debug.Log ("data invalid");
		}
	}
	
	void StartWriting (string filename)
	{
		if (!filename.ToLower().EndsWith(".wav")) {
			filename += ".wav";
		}
 
		var filepath = Path.Combine(Application.persistentDataPath, filename);
 
		Debug.Log(filepath);
 
		// Make sure directory exists if user is saving to sub dir.
		Directory.CreateDirectory(Path.GetDirectoryName(filepath));
		fileStream = new FileStream (filepath, FileMode.Create);
		byte emptyByte = new byte ();
        
		for (int i = 0; i< headerSize; i++) { //preparing the header
			fileStream.WriteByte (emptyByte);
		}
	}
	
	void ConvertAndWrite (float[] dataSource)
	{

		if (fileStream == null || dataSource == null || dataSource.Length <= 0) {
			return;		
		}

		Int16[] intData = new Int16[dataSource.Length];
		//converting in 2 steps : float[] to Int16[], //then Int16[] to Byte[]
        
		Byte[] bytesData = new Byte[dataSource.Length * 2];
		//bytesData array is twice the size of
		//dataSource array because a float converted in Int16 is 2 bytes.
        
		int rescaleFactor = 32767; //to convert float to Int16
        
		for (int i = 0; i<dataSource.Length; i++) {
			intData [i] = (short) (dataSource[i] * rescaleFactor);
			Byte[] byteArr = new Byte[2];
			byteArr = BitConverter.GetBytes (intData [i]);
			byteArr.CopyTo (bytesData, i * 2);
		}
        
		fileStream.Write (bytesData, 0, bytesData.Length);
	}
      
	void WriteHeader ()
	{       
		fileStream.Seek(0, SeekOrigin.Begin);
		
		Byte[] riff = System.Text.Encoding.UTF8.GetBytes("RIFF");
		fileStream.Write(riff, 0, 4);
		
		Byte[] chunkSize = BitConverter.GetBytes(fileStream.Length - 8);

		Debug.Log ("fileStream.length : " + fileStream.Length + " chunkSize : " + chunkSize[0] +" , " + chunkSize[1]+" , " + chunkSize[2]+" , " + chunkSize[3]);
		fileStream.Write(chunkSize, 0, 4);
		
		Byte[] wave = System.Text.Encoding.UTF8.GetBytes("WAVE");
		fileStream.Write(wave, 0, 4);
		
		Byte[] fmt = System.Text.Encoding.UTF8.GetBytes("fmt ");
		fileStream.Write(fmt, 0, 4);
		
		Byte[] subChunk1 = BitConverter.GetBytes(16);
		fileStream.Write(subChunk1, 0, 4);
		
//		UInt16 two = 2;
		UInt16 one = 1;
		
		Byte[] audioFormat = BitConverter.GetBytes(one);
		fileStream.Write(audioFormat, 0, 2);
		
		Byte[] numChannels = BitConverter.GetBytes(channels);
		fileStream.Write(numChannels, 0, 2);
		
		Byte[] sampleRate = BitConverter.GetBytes(outputRate);
		fileStream.Write(sampleRate, 0, 4);
		
		Byte[] byteRate = BitConverter.GetBytes(outputRate * channels * 2); // sampleRate * bytesPerSample*number of channels, here 44100*2*2
		fileStream.Write(byteRate, 0, 4);
		
		UInt16 blockAlign = (ushort) (channels * 2);
		fileStream.Write(BitConverter.GetBytes(blockAlign), 0, 2);
		
		UInt16 bps = 16;
		Byte[] bitsPerSample = BitConverter.GetBytes(bps);
		fileStream.Write(bitsPerSample, 0, 2);
		
		Byte[] datastring = System.Text.Encoding.UTF8.GetBytes("data");
		fileStream.Write(datastring, 0, 4);
		
		Byte[] subChunk2 = BitConverter.GetBytes(outputRate * channels * 2);
		fileStream.Write(subChunk2, 0, 4);
        
		fileStream.Close ();
	}
	
}
					