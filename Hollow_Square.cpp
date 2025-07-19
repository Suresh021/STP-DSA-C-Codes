#include <iostream>
using namespace std;

class Solution {
public:
    void printHollowSquare(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (i == 1 || i == n || j == 1 || j == n)
                    cout << "*";
                else
                    cout << " ";
            }
            cout << endl;
        }
    }

    void sumWithoutFormula(int n) {
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
        cout << "Sum from 1 to " << n << " = " << sum << endl;
    }
};

int main() {
    int n;
    cin >> n;

    Solution sol;
    sol.printHollowSquare(n);
    sol.sumWithoutFormula(n);

    return 0;
}
