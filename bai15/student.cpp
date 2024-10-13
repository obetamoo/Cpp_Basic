#include"student.h"


void insertInfo(Student &a){
    // Nhập tên
    std::cout << "Insert Full Name:";
    std::getline(std::cin, a.name);
    // Nhập tuổi
    std::cout << "Insert Age:";
    std::cin >> a.age;
    // Nhập điểm trung bình
    std::cout << "Insert GPA";
    std::cin >> a.gpa;
}

void showInfo(Student &a){
    std::cout << "====> Print info of " << a.name << ":\n"; 
    std::cout << "Name: " << a.name << std::endl;
    std::cout << "Age: " << a.age << std::endl;
    std::cout << "GPA: " << a.gpa << std::endl;
}