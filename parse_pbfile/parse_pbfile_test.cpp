#include <fstream>
#include "link_lib_common.h"
#include "person.pb.h"
static void write_pb_file(const std::string& str_pb_file_path)
{
        Person test_case;
        test_case.set_name("kakaka");
        test_case.set_id(2);
        test_case.set_email("wqw@123.com");
        test_case.set_face_id("wqw");
        std::fstream pb_file(str_pb_file_path, std::ios::out |std::ios::trunc | std::ios::binary);
        if (!test_case.SerializeToOstream(&pb_file)) {
                std::cerr << "Failed to write address book." << std::endl;
        }
        return;
}


static void read_pb_file(const std::string& str_pb_file_path)
{
        std::ifstream pb_file(str_pb_file_path, std::ios::in | std::ios::binary);
        Person test_case;
        if (!test_case.ParseFromIstream(&pb_file)) return;
        std::cout << test_case.name() << "\t" << test_case.id() << "\t" << 
                test_case.email() << "\t" << test_case.face_id() <<"\t" << std::endl;
        return;
}

int main() 
{
        write_pb_file("./person_test_case_002.pb");
        read_pb_file("./person_test_case_002.pb");

}