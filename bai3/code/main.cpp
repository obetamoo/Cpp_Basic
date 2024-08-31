#include <iostream>
int main()
{
    std::string fullname;

    std::cout << "Your full name: ";
    std::getline(std::cin, fullname);

    std::cout << "You are " << fullname << std::endl;

    return 0;
}