#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() <= 1) {
            return nums.size();
        }
        int start = 0;
        int current = 1;
        while (current < nums.size()) {
            if (nums[start] == nums[current]) {
                current++;
            } else {
                start++;
                nums[start] = nums[current];
                current++;
            }
        }
        return start + 1;  // Return the number of unique elements
    }
};

int main() {
    Solution solution;
    
    int n;  // Number of elements
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);  // Vector to store the input numbers
    cout << "Enter the elements of the array (sorted): ";
    for (int i = 
