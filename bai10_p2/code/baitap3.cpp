#include<iostream>
#include<numeric>

void insertScore(float arr[], int size);
void filterStudent(float arr[], int size, float target);

int main(){
    std::gcd(1,2);
    int n;
    float target;
    std::cout << "Moi ban nhap so luong thi sinh:";
    std::cin >> n;

    float arrStudentScore[n];

    insertScore(arrStudentScore, n);

    std::cout << "Nhap diem trung tuyen:";
    std::cin >> target;

    filterStudent(arrStudentScore, n, target);

    return 0;
}

void insertScore(float arr[], int size){
    for(int i = 0; i < size; i++){
        std::cout << "Moi ban tong diem 3 mon cua hoc sinh thu: " << i + 1 << " la:"; 
        std::cin >> arr[i];
    }
}
void filterStudent(float arr[], int size, float target){
    for(int i = 0; i < size; i++){
        if(arr[i] >= target){
            std::cout << arr[i] << " ";
        }
    }
}