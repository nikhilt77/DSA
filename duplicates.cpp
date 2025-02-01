#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ind = 0;
        for (int ele : nums) {
            if (ind < 2 || ele != nums[ind - 2]) {
                nums[ind++] = ele;
            }
        }
        return ind;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    Solution sol;
    int newSize = sol.removeDuplicates(nums);
    for (int i = 0; i < newSize; i++) {
        cout << nums[i] << " ";
    }
    return 0;
}
