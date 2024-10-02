#include<iostream>

// Diện tích hình Vuông
double area(double a){
    return a * a;
}

// Diện tích hình Chữ nhât
double area(double length, double width){
    return length * width;
}
// Diện tích hình Tròn

double area(double r, bool isCycle){
    return r * r * 3.14;
}



int main(){
    
    std::cout << "Dien tich hinh vuong la:" << area(4) << std::endl;
    std::cout << "Dien tich hinh chu nhat la:" << area(5.0, 3.0) << std::endl;
    std::cout << "Dien tich hinh tron la:" << area(2, true) << std::endl;
    
    
    return 0;
}