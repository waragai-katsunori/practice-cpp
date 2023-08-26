#include <iostream>

int main(){
    int a = 1;
    int b = 1;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    for(int i = 0 ; i < 30 ; i++){
        std::cout << a + b << std::endl;
         int tmp = a;
         a = b;
         b = tmp + a;
     }    
    return 0;
}
