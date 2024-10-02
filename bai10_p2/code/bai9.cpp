#include<iostream>
#include<iomanip>
float power(float x, int n);
float sum(float x, int n);
int main(){
   
    std::cout << std::fixed << std::setprecision(3) <<sum(2,1) << std::endl;

    return 0;
}


float power(float x, int n){
    float result = 1;
    for(int i = 1; i <= n; i++){
        result = result * x; // 2 * 2 * 2
    }
    return result;
}

float sum(float x, int n){
    float sum = 0;
    for(int i = 1; i <= n; i++){
        sum = sum + power(x, i);
    }

    return sum;
}