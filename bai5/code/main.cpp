#include <iostream>
#include <iomanip>
int main()
{
    float a = 1430563456.135434534;

    std::cout << a << std::endl;
    std::cout << "Format: " << std::fixed << std::setprecision(3) << a << std::endl;
    std::cout << std::defaultfloat << a << std::endl;
    std::cout << "End Programming" << std::endl;
    return 0;
}