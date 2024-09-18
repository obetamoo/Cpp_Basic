#include <iostream>
#include <cstring>
int main()
{
    char ki_tu[30];

    std::cout << "Moi ban nhap ki tu:";
    std::cin.getline(ki_tu, 30); // max = 29   kí tự 30 = '\0' => null

    int length = sizeof(ki_tu) / sizeof(ki_tu[0]);

    std::cout << "Length ki tu = " << length << std::endl;
    std::cout << "Length ki tu = " << strlen(ki_tu) << std::endl;
    return 0;
}