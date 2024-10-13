#include<iostream>


struct Student{
public:
    std::string fullName;
    int age;
private:
    float balance = 200;
    
public:
    float getterBalance(){
        return this->balance;
    }
    
    void setterBalance(float money){
        this->balance = money;
    }

    

};



int main(){
    
    /* các từ khóa public, private và protected được sử dụng để quản lý quyền truy cập vào các thành viên (thuộc tính và phương thức) của class hoặc struct */
    /* Private, protected Dùng để bảo vệ dữ liệu và đảm bảo rằng nó chỉ có thể được truy cập hoặc thay đổi thông qua các phương thức public (getter/setter). */

    Student a; 
    a.fullName = "Nguyen Van A";
    a.age = 19;
    

    std::cout << a.fullName << std::endl;
    std::cout << a.age << std::endl;
    std::cout << a.getterBalance() << std::endl;
    
    a.setterBalance(100);
    std::cout << "========================\n";


    std::cout << a.fullName << std::endl;
    std::cout << a.age << std::endl;
    std::cout << a.getterBalance() << std::endl;
    
    return 0;
}