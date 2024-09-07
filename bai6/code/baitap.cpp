#include <iostream>
#include <limits>
int main()
{
    
    int number;
    int sum = 0;
    float average = 0;
    int count = 0;
    int min = std::numeric_limits<int>::max();
    int max = std::numeric_limits<int>::min();
    int even = 0;
    int odd = 0;
    int n;
    int sumOfN = 0;
    while (true)
    {
        std::cout << "Moi ban nhap so nguyen duong n:";
        std::cin >> number;
        if (number == 0)
        {
            break;
        }
        if (number > 0)
        {
            sum += number;
            count = count + 1;
        }
        if((min > number) && (number > 0)){
            min = number;
        }
        if((max < number) && (number > 0)){
            max = number;
        }
        if((number % 2 == 0) && (number > 0)){
            even++; // 1
        }
        
        if((number % 2 != 0) && (number > 0)){
            odd++; // 1
        }
    }


    std::cout << "Moi ban nhap n de tinh tong tu (1 toi n):";
    std::cin >> n;
    
    for(int i = 1; i <= n; i++){
        sumOfN = sumOfN + i;
    }

    

    average = static_cast<float>(sum) / count;

    std::cout << "Tong cac so nguyen duong ban vua nhap la: " << sum << std::endl;

    std::cout << "Trung binh cong cua " << count << " so nguyen duong la: " << average << std::endl;

    std::cout << "So nho nhat trong day so nguyen duong ban vua nhap la: " << min << std::endl;

    std::cout << "So lon nhat trong day so nguyen duong ban vua nhap la: " << max << std::endl;

    std::cout << "Co " << even << " so chan trong day ban vua nhap!!!" << std::endl;

    std::cout << "Co " << odd << " so le trong day ban vua nhap!!!" << std::endl;

    std::cout << "Tong cac so tu 1 toi " << n << " la: " << sumOfN << std::endl;
    std::cout << "->>>Ket thuc chuong trinh<<<-" << std::endl;
    return 0;
}