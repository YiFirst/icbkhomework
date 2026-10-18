#include <iostream>
int main(){
    int a, b;
    for(a=1;a<=9;a++){
        b=1;
        for(b=1;b<=a;b++){
            std::cout << b << "*" << a << "=" << a * b << "\t";
        }
        std::cout << "\n";
    }
}