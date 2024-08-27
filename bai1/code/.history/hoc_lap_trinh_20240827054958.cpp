#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
	// Một số lớn hơn 2^64
	double largeNumber = 1.0e+308; // Gần với giới hạn trên của double

	// Vượt quá phạm vi của double
	double tooLarge = 1.0e+310; // Vượt quá phạm vi của double, sẽ trở thành +∞

	std::cout << "Large number: " << largeNumber << std::endl;
	std::cout << "Too large number: " << tooLarge << std::endl;
	std::cout << "Maximum value of double: " << std::numeric_limits<double>::max() << std::endl;

	return 0;
}