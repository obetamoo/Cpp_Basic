#include <iostream>

int main()
{
    int n;
    float average_score = 0;
    int sum = 0;

    std::cout << "Moi ban nhap so luong hoc sinh";
    std::cin >> n;

    float arr[n];

    for (int i = 0; i < n; i++)
    {
        std::cout << "Nhap diem cho ban hoc sinh thu " << i + 1 << " la:";
        std::cin >> arr[i];
    }
    float min_score = arr[0];
    float max_score = arr[0];

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    average_score = static_cast<float>(sum) / n;

    for (int i = 0; i < n; i++)
    {
        if (min_score > arr[i])
        {
            min_score = arr[i];
        }
        if (max_score < arr[i])
        {
            max_score = arr[i];
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // hoán đổi
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    std::cout << "Diem trung binh cua " << n << " hoc sinh la: " << average_score << std::endl;

    std::cout << "Diem max = " << max_score << std::endl;
    std::cout << "Diem min = " << min_score << std::endl;

    std::cout << "=========================\n";

    for (int i = 0; i < n; i++)
    {
        std::cout << "Hoc sinh thu " << i + 1 << " Co diem so la: " << arr[i] << std::endl;
    }

    return 0;
}