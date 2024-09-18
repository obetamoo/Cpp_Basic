#include <iostream>

void inputScore(float arr[], int size);
void printScores(float arr[], int size);
float caculateAverage(float arr[], int size);
void gradeStudent(float score);

int main()
{
    int n;
    std::cout << "Moi ban nhap so luong hoc sinh:";
    std::cin >> n;

    float studentArray[n];

    inputScore(studentArray, n);
    printScores(studentArray, n);

    std::cout << "Diem trung binh cua " << n << " ban hoc sinh la: " << caculateAverage(studentArray, n) << std::endl;

    for (int i = 0; i < n; i++)
    {
        std::cout << "Diem cua ban thu " << i + 1 << " Xep loai ";
        gradeStudent(studentArray[i]);
    }

    return 0;
}

void inputScore(float arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << "Moi ban nhap diem cua ban hoc sinh thu " << i + 1 << " la:";
        std::cin >> arr[i];
    }
}
void printScores(float arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << "Ban hoc sinh thu " << i + 1 << " co diem la: " << arr[i] << std::endl;
    }
}
float caculateAverage(float arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return (static_cast<float>(sum) / size);
}

void gradeStudent(float score)
{
    if (score >= 90)
    {
        std::cout << "Excellent" << std::endl;
    }
    else if (score >= 75 && score <= 89)
    {
        std::cout << "Good" << std::endl;
    }
    else if (score >= 50 && score <= 74)
    {
        std::cout << "Average" << std::endl;
    }
    else
    {
        std::cout << "Poor" << std::endl;
    }
}