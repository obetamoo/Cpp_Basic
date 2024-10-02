#include<iostream>
#include<cmath>
#include<iomanip>
void giaiPhuongTrinhBacHai(float a, float b, float c);


int main(){
    float a, b, c;

    std::cout << "Nhap he so a:";
    std::cin >> a;

    std::cout << "Nhap he so b:";
    std::cin >> b;

    std::cout << "Nhap he so c:";
    std::cin >> c;

    giaiPhuongTrinhBacHai(a, b, c);
    return 0;
}

void giaiPhuongTrinhBacHai(float a, float b, float c){
    if(a == 0){
        if(b == 0){
            if(c != 0){
                std::cout << "Vo nghiem\n";
            }
            else{
                std::cout << "Vo so nghiem\n";
            }
        }else{
            std::cout << "Phuong trinh co 1 nghiem x = "<< std::fixed << std::setprecision(3) << -c / b << std::endl;
        }
    }
    else{
        float delta = (b * b) - (4 * a * c);
    
        if(delta < 0){
            std::cout << "Vo nghiem\n";
        }else if(delta == 0){
            std::cout << "Phuong trinh co nghiem kep x1 = x2 = " << -b/(2*a) << std::endl;
        }else{
           float x_1 = (-b + sqrt(delta))/ (2*a);
           float x_2 = (-b - sqrt(delta))/ (2*a);
           std::cout << "Phuong trinh co hai nghiem phan biet:\n";
           std::cout << "x1 = " << std::fixed << std::setprecision(3) << x_1 << std::endl; 
           std::cout << "x2 = " << std::fixed << std::setprecision(3) << x_2 << std::endl; 
        }


    }


}