#include<iostream>

bool Prime(int n);


int main(){
    int n = 14;
    

    if(Prime(n)){
        std::cout << n << " La so nguyen to\n";
    }else{
        std::cout << n << " Khong phai la so nguyen to\n";
    }

    return 0;
} wqe  weq e qwe 


bool Prime(int n){
    if(n <= 1){
        return false;
    }
    for(int i = 2; i < n; i++){ // 11 => [2; 10]
        if(n % i == 0){
            return false;
        }
    }  
    return true;
}