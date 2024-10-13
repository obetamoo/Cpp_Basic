#include<iostream>
const int MaxEmp = 50;


struct Employee{
    std::string id;
    std::string fullName;
    std::string dob; // date of birth
    std::string address;
    std::string workingDay;
    float salary;
    float salaryCoefficient;
    float income;
};

void insertDataForEmp(Employee &emp);
void printInfoEmp(Employee &emp);
void insertListEmp(Employee list[], int size);
void printAllListEmp(Employee list[], int size);

void findEmpFollowId(Employee list[], int size, std::string id);

std::string textToLower(const std::string value);

void findEmpFollowFullName(Employee list[], int size, std::string name);

void sortEmpFollowIncome(Employee list[], int size);


int main(){
    Employee list[MaxEmp];
    int choice = -1;
    int n = 0; // số lượng nhân viên thực tế 
    do
    {
        std::cout << "=========Menu=========\n";
        std::cout << "1. Nhap So Luong Nhan Vien (<50).\n";
        std::cout << "2. Nhap Danh Sach Nhan Vien. \n";
        std::cout << "3. Xem Danh Sach Nhan Vien. \n";
        std::cout << "4. Tim Nhan Vien Theo Ma.\n";
        std::cout << "5. Tim Nhan Vien Theo Ten.\n";
        std::cout << "6. In Danh Sach Nhan Vien Theo Luong (Giam dan).\n";
        std::cout << "0. Ket Thuc Chuong Trinh!!!\n"; 
        std::cout << "=========End=========\n";
        std::cout << "===> Nhap lua chon cua ban:";
        std::cin >> choice;
        std::system("cls");
        if(choice == 0){
            std::cout << "Ban Vua Chon " << choice << " De Ket Thuc Chuong Trinh\n";
        }
        else if(choice == 1){
        // Nhap So Luong Nhan Vien
        
            std::cout << "Moi ban nhap so luong nhan vien:";
            std::cin >> n;

        }else if(choice == 2){
        // Nhap Danh Sach Nhan Vien
            
            insertListEmp(list, n);
        }else if(choice == 3){
        // Xem Danh Sach Nhan Vien
            printAllListEmp(list, n);
        }else if(choice == 4){
        // Tim Nhan Vien Theo Ma
            std::cin.ignore();
            std::string id;
            std::cout << "Ban muon tim nhan vien co ma la:";
            std::getline(std::cin, id);

            findEmpFollowId(list, n, id);

        }else if(choice == 5){
        // Tim Nhan Vien Theo Ten
            std::cin.ignore();
            std::string findName = "";
            std::cout << " Nhap ten nhan vien ban muon tim kiem:";
            std::getline(std::cin, findName);
            findEmpFollowFullName(list, n, findName);
        }else if(choice == 6){
        // In Danh Sach Nhan Vien Theo Luong
            sortEmpFollowIncome(list, n);
            
        }else{
            std::cout << "=>!!! Ban nhap lua chon khong co tren MENU vui long chon lai!!!\n";
        }
        
    } while (choice != 0);

    return 0;
}


void insertDataForEmp(Employee &emp){
    std::cin.ignore();
    std::cout << "==========Nhap Thong Tin Nhan Vien==========\n";
    std::cout << "Nhap ma so:";
    std::getline(std::cin, emp.id);
    std::cout << "Nhap ho va ten:";
    std::getline(std::cin, emp.fullName);
    std::cout << "Nhap ngay sinh (dd/mm/yy):";
    std::getline(std::cin, emp.dob);
    std::cout << "Nhap dia chi:";
    std::getline(std::cin, emp.address);
    std::cout << "Nhap ngay cong tac (dd/mm/yy):";
    std::getline(std::cin, emp.workingDay);
    std::cout << "Nhap luong co ban:";
    std::cin >> emp.salary;
    std::cout << "Nhap he so luong:";
    std::cin >> emp.salaryCoefficient;
    emp.income = emp.salary * emp.salaryCoefficient;
}

void printInfoEmp(Employee &emp){
    std::cout << "===========Info Of Employee===========\n";
    std::cout << "ID:" << emp.id << std::endl;
    std::cout << "Full Name:" << emp.fullName << std::endl;
    std::cout << "DOB:" << emp.dob << std::endl;
    std::cout << "Address:" << emp.address << std::endl;
    std::cout << "Working day:" << emp.workingDay << std::endl;
    std::cout << "Salary:" << emp.salary << std::endl;
    std::cout << "Salary Coefficient:" << emp.salaryCoefficient << std::endl;
    std::cout << "Income:" << emp.income << std::endl;
}

void insertListEmp(Employee list[], int size){
    for(int i = 0; i < size; i++){
        insertDataForEmp(list[i]);
    }
    std::system("cls");
}
void printAllListEmp(Employee list[], int size){
    for(int i = 0; i < size; i++){
        printInfoEmp(list[i]);
    }
}

void findEmpFollowId(Employee list[], int size, std::string id){
    for(int i = 0; i < size; i++){
        if(list[i].id == id){
            std::cout << "Da tim thay nhan vien co ma la: " << id << std::endl;
            printInfoEmp(list[i]);
            return;
        }
    }
    std::cout << "Khong tim thay nhan vien nao co ma la: " << id << std::endl;
    return;
}


std::string textToLower(const std::string value){
    std::string result = "";

    for(int i = 0; i < value.length(); i++){
        result += std::tolower(value[i]);
    }

    return result;
}


void findEmpFollowFullName(Employee list[], int size, std::string name){

    std::string insert_name = textToLower(name);

    for(int i = 0; i < size; i++){
        std::string tempFullName = textToLower(list[i].fullName);
        if(tempFullName.find(insert_name) != std::string::npos){
            std::cout << "Da tim thay nhan vien co ten la:" << name << " trong danh sach!!!\n";
            printInfoEmp(list[i]);
            return;
        }
    }

    std::cout << "Khong tim thay nhan vien nao co ten la: " << name << " trong danh sach ***\n"; 

    return;

}

void sortEmpFollowIncome(Employee list[], int size){
    // Dùng thuật toán buble sort
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(list[j].income < list[j + 1].income){
                Employee temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }
    return;
}