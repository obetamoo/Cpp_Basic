#include<iostream>

std::string textToLower(const std::string value);

int main(){


    std::string fullName = "Do Duy Thai";
    
    std::string check = textToLower(fullName);

    std::cout << check << std::endl;
    return 0;
}

std::string textToLower(const std::string value){
    std::string result = "";

    for(int i = 0; i < value.length(); i++){
        result += std::tolower(value[i]);
    }

    return result;
}