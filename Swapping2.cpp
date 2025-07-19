#include <iostream>
using namespace std;

void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void modifyByValue(int x) {
    x = x + 1;
    cout << "Inside modifyByValue: x = " << x << ", address = " << &x << endl;
}

void modifyByReference(int &x) {
    x = x + 1;
    cout << "Inside modifyByReference: x = " << x << ", address = " << &x << endl;
}

int main() {
    int a, b;
    cin>>a;
    cin>>b;
    cout << "Original: a = " << a << ", b = " << b << endl;
    swapByReference(a, b);
    cout << "After swapByReference: a = " << a << ", b = " << b << endl;

    swapByValue(a, b);
    cout << "After swapByValue: a = " << a << ", b = " << b << " (unchanged)" << endl;

    int x = 7;
    cout << "Before modifyByValue: x = " << x << ", address = " << &x << endl;
    modifyByValue(x);
    cout << "After modifyByValue: x = " << x << " (unchanged)" << endl;

    cout << "Before modifyByReference: x = " << x << ", address = " << &x << endl;
    modifyByReference(x);
    cout << "After modifyByReference: x = " << x << " (changed)" << endl;

    return 0;
}
