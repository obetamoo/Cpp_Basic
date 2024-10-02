#include<iostream>

void insertArr(int arr[], int size);
int findMax(int arr[], int size);
int findMin(int arr[], int size);
int sumFish(int arr[], int size);


int main(){
    int n;
    std::cout << "Nhap n loai ca:";
    std::cin >> n;

    int fishPriceList[n]; 
    insertArr(fishPriceList, n);
    
    std::cout << "Loai ca co gia dat nhat la: " << findMax(fishPriceList, n) << std::endl;
    std::cout << "Loai ca co gia re nhat la: " << findMin(fishPriceList, n) << std::endl;
    
    std::cout << "Tong gia cac loai ca la:" << sumFish(fishPriceList, n) << std::endl;
    
    return 0;
}

void insertArr(int arr[], int size){
    for(int i = 0; i < size; i++){
        std::cout << "Moi ban nhap gia cua loai ca thu " << i + 1 << " la:";
        std::cin >> arr[i];
    }
}
int findMax(int arr[], int size){
    int max = arr[0];
    for(int i = 1; i < size; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}
int findMin(int arr[], int size){
    int min = arr[0];
    for(int i = 1; i < size; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    return min;
}
int sumFish(int arr[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum+= arr[i];
    }
    return sum;
}