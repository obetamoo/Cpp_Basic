#include<iostream>


void print(int a, int b = 5);
void print(int a);

int add(int a, int b);
float add(int a, int b);

int main(){
    std::cout << print(5) << std::endl;
    std::cout << add(5, 4) << std::endl;

    return 0;
}