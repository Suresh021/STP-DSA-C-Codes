#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    cout << "Before swap: a = " << a << ", b = " << b << endl;

    // Swap without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After swap: a = " << a << ", b = " << b << endl;

    return 0;
}
