#include <iostream>

int calculateArea(int length, int width = 5)
{
    return length * width;
}

int main()
{

    std::cout << "Dien tich hinh chu nhat la: " << calculateArea(15) << std::endl;
    std::cout << "Dien tich hinh chu nhat la: " << calculateArea(15, 6) << std::endl;

    return 0;
}
