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
    - unsigned (4 bytes) (32 bits)            0  <= unsigned <= 2^32
    - int32_t (32 bits)                     -2^31 <= int32_t <= 2^31 - 1
    - int8_t (8 bits)                       -2^7 <= int8_t <= 2^7 - 1


    Ví dụ: x thuộc R
    - Số thực: 1.0, 2.5, 4.9, 7.9, 9.9, 9.1234
    - float (4 bytes)

    */

    std::int64_t a = 30000000000;
    std::cout << "Hello World!" << std::endl;
    std::cout << "Value of a:" << a;
    return 0;
}
