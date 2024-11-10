#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ind = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[ind++] = nums[i];
            }
        }
        return ind;
    }
};

int main() {
    Solution solution;
    int n, val;
    
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    cout << "Enter the value to remove: ";
    cin >> val;
    
    int newLength = solution.removeElement(nums, val);
    
    cout << "New length: " << newLength << endl;
    cout << "Modified array: ";
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
