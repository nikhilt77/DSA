#include <iostream>
#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        int n = nums.size();
        std::vector<int> fin;
        for (int i = 0; i < n; i++) {
            int ref = nums[i];
            bool isPresent = false;
            for (int j = 0; j < fin.size(); j++) {
                if (ref == fin[j]) {
                    isPresent = true;
                    break;
                }
            }
            if (!isPresent) {
                fin.push_back(ref);
            }
        }
        nums = fin;
        return fin.size();
    }
};

int main() {
    Solution solution;
    std::vector<int> nums = {1, 1, 2, 3, 3, 4, 5, 5, 6};
    
    int uniqueCount = solution.removeDuplicates(nums);
    
    std::cout << "Number of unique elements: " << uniqueCount << std::endl;
    std::cout << "Unique elements: ";
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
