#include<iostream>

int countWord(std::string value);



int main(){
    std::string s;
    
    std::cout << "Moi ban nhap mot chuoi ki tu:";
    std::getline(std::cin, s);
    

    std::cout << "Co " << countWord(s) << "  tu o trong chuoi" << s << std::endl;

    return 0;
}


int countWord(std::string value){
    int count = 1;
    for(int i = 0; i < value.length(); i++){
        if(value[i] == ' '){
            count++;

        }
    }
    return count;
}