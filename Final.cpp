#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for (int i = 0; i < k; ++i) {
            int minIndex = 0;
            for (int j = 1; j < nums.size(); ++j) {
                if (nums[j] < nums[minIndex]) {
                    minIndex = j;
                }
            }
            nums[minIndex] *= multiplier;
        }
        return nums;
    }
};

int main() {
    Solution sol;
    
    vector<int> nums1 = {2, 1, 3, 5, 6};
    int k1 = 5;
    int multiplier1 = 2;
    vector<int> result1 = sol.getFinalState(nums1, k1, multiplier1);
    for (int num : result1) {
        cout << num << " ";
    }
    cout << endl;
    
    vector<int> nums2 = {1, 2};
    int k2 = 3;
    int multiplier2 = 4;
    vector<int> result2 = sol.getFinalState(nums2, k2, multiplier2);
    for (int num : result2) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
