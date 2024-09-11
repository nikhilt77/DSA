#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp;
        for(int ele:nums){
            mp[ele]++;
        }
        int maj=nums.size()/2;
        for(auto it:mp){
            if(it.second>maj){
                return it.first;
            }
        }
        return -1;
    }
};

int main() {
    Solution sol;
    
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int result = sol.majorityElement(nums);
    cout << "Majority Element: " << result << endl;

    return 0;
}
