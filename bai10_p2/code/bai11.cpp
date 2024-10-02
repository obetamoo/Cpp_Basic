#include<iostream>

void printTriangular(int n);
void printSquare(int n);
void printDiamond(int n);
int main(){

    printTriangular(50);
    printSquare(50);
    printDiamond(50);
    return 0;
}

void printTriangular(int n){
    for(int i = 1; i <= n; i++){
        // Làm việc với khoảng trắng
        for(int j = i; j < n; j++){
            std::cout << " ";
        }

        // Làm việc với dấu *
        for(int k = 1; k <= (2 * i - 1); k++){
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}
void printSquare(int n){
    for(int i = 1; i <= n; i++){
        // in dấu *
        for(int j = 1; j <= n; j++){
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

void printDiamond(int n){
    // vòng lặp for đầu tiên
    for(int i = 1; i <= n; i++){
        // in ra dấu * 
        for(int j = 1; j <= (2 * i - 1); j++){
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    for(int i = n - 1; i >= 1; i--){
        for(int j = 1; j <= (2 * i - 1); j++){
            std::cout << "*";
        }
        std::cout << std::endl;
    }
     qwe  w e  e ahih tam
    // vòng lặp for thứ hai
}