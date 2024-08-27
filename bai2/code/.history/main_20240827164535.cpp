#include <iostream>
int main()
{
    /*
    - std là viết tắt của từ: standard
    - cout: character output
    - cin: character input
    - endl: end line
    */

    /* Các kiểu dữ liệu cơ bản và giới hạn
    Ví dụ: x thuộc Z, điều kiện: 0 <= x <= 10
                                => min của x = 0
                                => max của x = 10
    - Số nguyên: 0, 1, 2, 3, -1, -2, -3
    - Giới hạn của kiểu dữ liệu int là bao nhiên min, max
    - 1 byte = 8 bits  (0110 0010)
    - int (4 bytes) (32 bits) =>          -2^31 <= int <= 2^31 - 1

    */
    int a = 10;
    std::cout << "Hello World!" << std::endl;
    return 0;
}
