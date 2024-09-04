#include <iostream>

int main()
{
start:
    float toan, van, anh, diem_tb;
    std::string hanh_kiem, hoc_bong;
    char lua_chon; // yes or no => y (yes) or n (no)

    std::cout << "Moi ban nhap diem mon toan:";
    std::cin >> toan;

    std::cout << "Moi ban nhap diem mon van:";
    std::cin >> van;

    std::cout << "Moi ban nhap diem mon anh:";
    std::cin >> anh;

    diem_tb = (toan + van + anh) / 3;

    hanh_kiem = (diem_tb) >= 9 ? "Xuat xac" : (diem_tb) >= 8 ? "Gioi"
                                          : (diem_tb) >= 7   ? "Kha"
                                          : (diem_tb) >= 6   ? "Trung binh"
                                                             : "Yeu";
    // diem trung binh = 9.7 => 9
    switch (static_cast<int>(diem_tb))
    {
    case 10:
        hoc_bong = "Hoc bong toan phan => ban qua suat xac!!!";
        break;
    case 9:
        hoc_bong = "Hoc bong 90% => ban that Tuyet voi";
        break;
    case 8:
        hoc_bong = "Hoc bong 80% => ban that no luc";
        break;
    case 7:
        hoc_bong = "Hoc bong 70% => ban da rat co gang";
        break;
    case 6:
        hoc_bong = "Hoc bong 60% => good job";
        break;
    default:
        hoc_bong = "Ban khong nhan duoc hoc bong.Ban can co gang nhieu len nhe!";
    }

    std::cout << "=========Thong tin hoc sinh=========" << std::endl;
    std::cout << "Diem trung binh cua ban la:" << diem_tb << std::endl;
    std::cout << "Hanh kiem cua ban la:" << hanh_kiem << std::endl;
    std::cout << "Hoc bong cua ban la:" << hoc_bong << std::endl;

    std::cout << "Moi ban nhap lua chon y (continue) or any character (stop programing):";
    std::cin >> lua_chon;
    if (lua_chon == 'y')
    {
        goto start;
    }
    std::cout << "=>>>>>Ket thuc chuong trinh<<<<<<=" << std::endl;
    return 0;
}