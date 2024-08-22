#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int XOR = 0;
        for (int i = 0; i < nums.size(); i++) {
            XOR = XOR ^ nums[i];
        }
        return XOR;
    }
};

int main() {
    Solution sol;

    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "The single number is: " << sol.singleNumber(nums) << endl;

    return 0;
}
