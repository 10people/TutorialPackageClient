#coding=utf-8

from xml.dom import minidom
import os
from hashlib import md5

def get_md5(file_path):
    m = md5()
    a_file = open(file_path, 'rb')
    m.update(a_file.read())
    a_file.close()
    return m.hexdigest()


def clean_meta_files():
    current_path = os.getcwd() + "/CheckFiles"
    print current_path
    for root, dirs, files in os.walk(current_path):
        for f in files:
            sufix = os.path.splitext(f)[1][1:]
            if sufix == "meta":
                os.remove(os.path.join(root, f))

def get_localfile_list():

    dic = {}
    current_path = os.getcwd() + "/CheckFiles"
    print current_path
    for root, dirs, files in os.walk(current_path):
        for f in files:
            file_full_path = os.path.join(root, f)
            file_rel_path = os.path.relpath(file_full_path, current_path)
            file_rel_path = file_rel_path.replace('\\', '/')
            print file_rel_path
            sufix = os.path.splitext(f)[1][1:]
            if sufix == "data":
                dic[file_rel_path] = {"md5": get_md5(file_full_path), "size": str(os.path.getsize(file_full_path))}
                print f

    return dic


def generate_update_file(info_dic):
    doc = minidom.Document()
    doc.appendChild(doc.createComment("mllbb update file"))
    file_root = doc.createElement("FileList")
    doc.appendChild(file_root)


    for current_key in info_dic.keys():
        print current_key
        print info_dic[current_key]["md5"]
        print info_dic[current_key]["size"]
        file_info = doc.createElement("FileInfo")

        file_path = doc.createElement("path")
        file_path.appendChild(doc.createTextNode(current_key))
        file_info.appendChild(file_path)

        file_md5 = doc.createElement("md5")
        file_md5.appendChild(doc.createTextNode(info_dic[current_key]["md5"]))
        file_info.appendChild(file_md5)

        file_size = doc.createElement("size")
        file_size.appendChild(doc.createTextNode(info_dic[current_key]["size"]))
        file_info.appendChild(file_size)

        file_root.appendChild(file_info)


    xml_file = file("update.info", "w")
    xml_file.write(doc.toprettyxml())
    xml_file.close()

def main():

    #clean_meta_files()
    file_dic = get_localfile_list()
    generate_update_file(file_dic)
    return

if __name__ == '__main__':
    main()