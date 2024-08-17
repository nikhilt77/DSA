#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       vector<int> rot;
       int n = nums.size();
       k = k % n;
       for(int i = n - k; i < n; i++){
            rot.push_back(nums[i]);
       }
       for(int i = 0; i < n - k; i++){
            rot.push_back(nums[i]);
       }
       nums = rot; 
    }
};

int main() {
    int n, k;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    cout << "Enter the value of k: ";
    cin >> k;
    
    Solution sol;
    sol.rotate(nums, k);
    
    cout << "Rotated array: ";
    for(int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
