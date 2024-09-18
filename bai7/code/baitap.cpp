#include <iostream>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    int length = sizeof(arr) / sizeof(arr[0]);

    int sum = 0;

    int position = 3;

    for (int i = position; i < length; i++)
    {
        sum = sum + arr[i];
    }

    std::cout << "Sum tu vi tri " << position << " toi cuoi mang la: " << sum << std::endl;

    return 0;
}