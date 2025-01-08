#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int ind = 0;
        for (int i = m; i < m + n; i++) {
            nums1[i] = nums2[ind++];
        }
        for (int i = 0; i < (m + n - 1); i++) {
            for (int j = 0; j < (m + n) - i - 1; j++) {
                if (nums1[j] >= nums1[j + 1]) {
                    int temp = nums1[j];
                    nums1[j] = nums1[j + 1];
                    nums1[j + 1] = temp;
                }
            }
        }
    }
};

int main() {
    int m, n;
    cin >> m >> n;
    vector<int> nums1(m + n), nums2(n);
    for (int i = 0; i < m; i++) cin >> nums1[i];
    for (int i = 0; i < n; i++) cin >> nums2[i];
    Solution().merge(nums1, m, nums2, n);
    for (int i = 0; i < m + n; i++) cout << nums1[i] << " ";
    return 0;
}
