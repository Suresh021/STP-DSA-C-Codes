#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

class Solution {
public:
    int findSecondLargest(vector<int>& arr) {
        int largest = INT_MIN;
        int secondLargest = INT_MIN;

        for (int num : arr) {
            if (num > largest) {
                secondLargest = largest;
                largest = num;
            } else if (num > secondLargest && num != largest) {
                secondLargest = num;
            }
        }

        return (secondLargest == INT_MIN) ? -1 : secondLargest;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution sol;
    cout << sol.findSecondLargest(arr) << endl;

    return 0;
}
