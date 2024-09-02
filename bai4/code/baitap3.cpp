#include <iostream>

int main()
{
    /*  Bài tập 10: Tính Năm Sinh Từ Tuổi
        Mô tả: Viết một chương trình C++ để nhập tuổi của một người và tính năm sinh của họ dựa trên năm    hiện tại.
     */
    int age;
    int current_year = 2024;
    std::cout << "Moi ban nhap tuoi:";
    std::cin >> age;

    int result = current_year - age;

    std::cout << "Ban sinh nam: " << result << std::endl;

    return 0;
}
