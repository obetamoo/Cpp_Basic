#include <iostream> 
using namespace std; 


// 5! = 4 * 3 * 2 * 1;

int giaiThua(int n){
    if(n == 1){
        return 1;
    }
    else{
        return n * giaiThua(n - 1);
    }
}
 
int main() 
{ 
    
    int n = 5;
    std::cout << giaiThua(n) << std::endl;



    return 0; 
} 