#include <iostream>

int main()
{
    /*     Bài Tập 1: Kiểm tra số dương hay âm
    Nội dung: Viết một chương trình kiểm tra xem một số nguyên là số dương hay âm bằng cách sử dụng toán tử ba ngôi. In ra thông báo phù hợp.
    Yêu cầu:
    •	Nhập số nguyên từ người dùng.
    •	Sử dụng toán tử ba ngôi để kiểm tra số đó và in thông báo.
     */
    int a;
    std::cout << "Moi ban nhap so nguyen a:";
    std::cin >> a;

    std::string result = (a > 0) ? "a la so duong" : (a < 0) ? "a la so am"
                                                             : "a = 0";

    std::cout << result << std::endl;
    std::cout << "Ket thuc chuong trinh!!!" << std::endl;
    return 0;
}