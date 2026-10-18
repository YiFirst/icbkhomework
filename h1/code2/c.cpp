#include <iostream>
int main() {
    int a, b;
    a = 1;
    while (a <= 9) {
        b = 1;
        while (b <= a) {
            std::cout << b << "*" << a << "=" << a * b << "\t";
            b++;
        }
        std::cout << "\n";
        a++;
    }
}