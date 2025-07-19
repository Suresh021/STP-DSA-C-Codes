#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    void findOccurrences(vector<int>& arr, int x) {
        int first = -1, last = -1;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == x) {
                if (first == -1) first = i;
                last = i;
            }
        }

        if (first == -1)
            cout << "Element not found" << endl;
        else
            cout << "First Occurrence: " << first << "\nLast Occurrence: " << last << endl;
    }
};

int main() {
    int n, x;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> x;

    Solution sol;
    sol.findOccurrences(arr, x);

    return 0;
}
