#include <iostream>
using namespace std;

class Solution {
public:
    bool isPrime(int n) {
        if (n <= 1) return false;
        if (n == 2) return true;
        if (n % 2 == 0) return false;

        for (int i = 3; i * i <= n; i += 2) {
            if (n % i == 0)
                return false;
        }
        return true;
    }

    void printPrimes(int N) {
        for (int i = 2; i <= N; i++) {
            if (isPrime(i)) {
                cout << i << " ";
            }
        }
        cout << endl;
    }
};

int main() {
    int N;
    cin >> N;

    Solution sol;
    sol.printPrimes(N);

    return 0;
}
