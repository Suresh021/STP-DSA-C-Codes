#include <iostream>
using namespace std;

class Solution {
public:
    bool isPrime(int n) {
        if (n <= 1)
            return false;
        if (n == 2)
            return true;
        if (n % 2 == 0)
            return false;
        for (int i = 3; i * i <= n; i += 2) {
            if (n % i == 0)
                return false;
        }
        return true;
    }
};

int main() {
    int n;
    cin >> n;

    Solution sol;
    cout << (sol.isPrime(n) ? "true" : "false") << endl;

    return 0;
}
