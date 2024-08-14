#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int ogs = n * (n + 1) / 2;
        int rs = 0;
        for(int i = 0; i < n; i++) {
            rs += nums[i];
        }
        return ogs - rs;
    }
};

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution solution;
    int missing = solution.missingNumber(nums);
    cout << "The missing number is: " << missing << endl;

    return 0;
}
