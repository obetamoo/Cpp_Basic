#include<iostream>


bool validateString(std::string value);


int main(){
    std::string s, result;

    std::cout << "Moi ban nhap bien so xe Ha Noi";
    std::getline(std::cin, s);

    if(validateString(s)){
        result = "YES";
    }
    else{
        result = "NO";
    }

    std::cout << "Bien so xe:" << s << "==>" << result << std::endl;

    return 0;
}


bool validateString(std::string value){
    if(value.length() != 11){
         return false;
    }

    if((value[0] != '2' || value[1] != '9')
    && (value[0] != '3' || value[1] != '0')
    && (value[0] != '3' || value[1] != '1')
    ) {
        return false;
    }

    if(value[2] != '-'){
         return false;
    }


    if(value[3] < 'A' || value[3] > 'Z'){
        return false;
    }

    for(int i = 4; i <= 7; i++){
        if(value[i] < '0' || value[i] > '9')
        {
            return false;
        }
    }

    if(value[8] != '.'){
        return false;
    }

    for(int i = 9; i <= 10; i++){
        if(value[i] < '0' || value[i] > '9')
        {
            return false;
        }
    }

    return true;


}