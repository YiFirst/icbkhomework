#include <iostream>
using namespace std;
class p {
    public:
    int add(int x, int y);
    void display() {
        cout << "hello,world" << endl;
    }
};

int p::add(int x, int y) {
    return x + y;
}
int main() {
    p obj;
    int x, y;
    cin >> x >> y;
    int result = obj.add(x, y);
    cout << "Result: " << result << endl;
    obj.display();
    return 0;
}