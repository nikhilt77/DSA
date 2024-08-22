#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int max = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) {
                count++;
                if (count >= max) {
                    max = count;
                }                
            } else {
                count = 0;
            }
        }
        return max;
    }
};

int main() {
    Solution sol;

    int numTestCases;
    cout << "Enter number of test cases: ";
    cin >> numTestCases;

    while (numTestCases--) {
        int n;
        cout << "Enter the number of elements in the array: ";
        cin >> n;

        vector<int> nums(n);
        cout << "Enter the elements of the array (0 or 1): ";
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }

        cout << "Max consecutive ones: " << sol.findMaxConsecutiveOnes(nums) << endl;
    }

    return 0;
}
