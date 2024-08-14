#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            if(nums[i] > nums[(i + 1) % n]) {
                count++;
            }
        }
        return count <= 1;
    }
};

int main() {
    Solution solution;
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    bool result = solution.check(nums);
    
    if(result) {
        cout << "The array can be rotated to form a non-decreasing sequence." << endl;
    } else {
        cout << "The array cannot be rotated to form a non-decreasing sequence." << endl;
    }

    return 0;
}
