# -*- coding: utf-8 -*-

import os
import person_pb2


def generate_test_cases(save_path):
    test_case = person_pb2.Person()
    test_case.name = "jack"
    test_case.id = 1
    test_case.email = "49544@qq.com"
    test_case.face_id = "45684"

    with open(save_path, "wb") as test_case_file:
        test_case_file.write(test_case.SerializeToString())


def read_single_test_case(pb_file_path):
    test_case = person_pb2.Person()
    with open(pb_file_path, "rb") as pb_file:
        test_case.ParseFromString(pb_file.read())

    print("name: ", test_case.name)
    print("id: ", test_case.id)
    print("email: ", test_case.email)
    print("face_id: ", test_case.face_id)


def main():
    save_path = "./person_test_case_001.pb"
    generate_test_cases(save_path)
    read_single_test_case(save_path)


if __name__ == "__main__":
    main()
