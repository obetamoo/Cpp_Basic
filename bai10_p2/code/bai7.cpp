#include<iostream>

int countAppearanceOfWord(std::string a, std::string b);



int main(){
    std::string a,b;

    std::cout << "Chuoi a:";
    std::getline(std::cin, a);
    std::cout << "Chuoi b:";
    std::getline(std::cin, b);

    std::cout << countAppearanceOfWord(a, b) << std::endl;

    return 0;
}

int countAppearanceOfWord(std::string a, std::string b){
    int count = 0;
    std::size_t pos = a.find(b);

    while(pos != std::string::npos){
        count++;
        pos = a.find(b, pos + b.length());
    }
    return count;
}