#include<iostream>
#include<numeric>



int main(){
    int n;
    std::cout << "Moi ban nhap so luong so nguyen n:";
    std::cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){
        std::cout << "Moi ban nhap so nguyen thu " << i + 1 << " la:";
        std::cin >> arr[i];
    }


    int result = arr[0];
    
    for(int i = 1; i < n; i++){
        result = std::gcd(result, arr[i]);
    }

    std::cout << result << std::endl;


    return 0;
}