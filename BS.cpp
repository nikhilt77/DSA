#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, h = nums.size() - 1;
        int flag = -1;
        while (l <= h) {
            int mid = (l + h) / 2;
            if (nums[mid] == target) {
                flag = mid;
                break;
            } else if (target < nums[mid]) {
                h = mid - 1;
            } else if (target > nums[mid]) {
                l = mid + 1;
            }
        }
        if (flag != -1) {
            return flag;
        } else {
            return -1;
        }
    }
};

int main() {
    Solution sol;

    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the sorted array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int target;
    cout << "Enter the target value: ";
    cin >> target;

    int result = sol.search(nums, target);

    if (result != -1) {
        cout << "Target found at index: " << result << endl;
    } else {
        cout << "Target not found in the array." << endl;
    }

    return 0;
}
