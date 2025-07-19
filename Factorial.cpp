#include <iostream>
using namespace std;

class Solution {
public:
    long long factorial(int n) {
        long long fact = 1;
        for (int i = 2; i <= n; i++) {
            fact *= i;
        }
        return fact;
    }
};

int main() {
    int n;
    cin >> n;

    Solution sol;
    cout << sol.factorial(n) << endl;

    return 0;
}
