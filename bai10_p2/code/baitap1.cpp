#include <iostream>

void InsertStudentScoreArr(float arr[], int size);
int ScholarshipVadidate(float score);
int main()
{
    int n, sum = 0;

    std::cout << "Moi ban nhap so luong sinh vien:";
    std::cin >> n;

    float studentScoreArr[n];

    InsertStudentScoreArr(studentScoreArr, n);

    for (int i = 0; i < n; i++)
    {
        sum = sum + ScholarshipVadidate(studentScoreArr[i]);
    }

    std::cout << "Tong tien thuong nha truong phai tra la: " << sum << std::endl;
    return 0;
}

void InsertStudentScoreArr(float arr[], int size)
{
    std::cout << "=======NHAP DIEM=======\n";
    for (int i = 0; i < size; i++)
    {
        std::cout << "Diem cua ban hoc sinh thu:" << i + 1 << " la:";
        std::cin >> arr[i];
    }
    std::cout << "======Ket Thuc Nhap Diem======\n";
}

int ScholarshipVadidate(float score)
{
    if ((score >= 9) && (score <= 10))
    {
        return 1800000;
    }
    else if ((score >= 8) && (score < 9))
    {
        return 1400000;
    }
    else if ((score >= 7) && (score < 8))
    {
        return 1200000;
    }
    else
    {
        return 0;
    }
}