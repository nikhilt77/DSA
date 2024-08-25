#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        const int mod = 1000000007;
        for (int i = 0; i < k; ++i) {
            int min = 0;
            for (int j = 1; j < nums.size(); ++j) {
                if (nums[min] > nums[j]) {
                    min = j;
                }
            }
            nums[min] = (static_cast<long long>(nums[min]) * multiplier) % mod;
        }
        return nums;
    }
};

int main() {
    Solution sol;
    
    int n, k, multiplier;
    cin >> n;
    
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    cin >> k >> multiplier;
    
    vector<int> result = sol.getFinalState(nums, k, multiplier);
    
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
