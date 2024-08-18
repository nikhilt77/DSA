#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int c0 = 0;
        int c1 = 0;
        int c2 = 0;
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                c0++;
            }
            else if(nums[i] == 1){
                c1++;
            }
            else if(nums[i] == 2){
                c2++;
            }
        }
        int ind = 0;
        for(int i = 0; i < c0; i++){
            nums[ind++] = 0;
        }
        for(int i = 0; i < c1; i++){
            nums[ind++] = 1;
        }
        for(int i = 0; i < c2; i++){
            nums[ind++] = 2;
        }
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter the elements (only 0, 1, 2): ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    sol.sortColors(nums);
    
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
