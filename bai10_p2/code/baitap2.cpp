#include<iostream>



void insertScore(float arr[], int size);

void printScore(float arr[], int size);




int main(){

    int n; 
    std::cout << "Moi ban nhap n thi sinh:";
    std::cin >> n;
    
    float arrStudentScore[n];
    insertScore(arrStudentScore, n);
    printScore(arrStudentScore, n);

    return 0;
}



void insertScore(float arr[], int size){
    for(int i = 0; i < size; i++){

        float sum = 0;
        for(int j = 0; j < size; j++){
            int a;
            std::cout << "Moi ban nhap diem cua ban hoc sinh thu:" << i + 1 << " la:";
            std::cout << "Diem thu " << j + 1 << " la:";
            std::cin >> a;
            sum+=a;
        }
        arr[i] = sum;
    }
}


void printScore(float arr[], int size){
    for(int i = 0; i < size; i++){
        std::cout << arr[i] << " ";
    }
}