#include <iostream>
using namespace std;
class p1 {
public:
    int a;
    int b;
};
int main() {
    p1 obj;
    obj.a = 10;
    obj.b = 20;
    cout << "a: " << obj.a << ", b: " << obj.b << endl;
    return 0;
}