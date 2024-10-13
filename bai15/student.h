#pragma once
#include<iostream>
// Đây là kiểu dữ liệu Student nhá bạn
struct Student{
    std::string name;
    int age;
    float gpa;
};

// Nhập dữ liệu cho sinh viên 
void insertInfo(Student &a);

// In dữ liệu ra ngoài màn hình cho sinh viên
void showInfo(Student &a);

