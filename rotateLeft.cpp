#include<iostream>
#include<vector>

using namespace std;

class Solution{
    public:
    void rotateArray(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};
int main(){
    int n;
    cout << "Enter size:";
    cin >> n;
    vector<int> nums;
    for(int i=0;i<n;i++){
        int ele;
        cin >> ele;
        nums.push_back(ele);
    }
    int k;
    cout << "Enter no. of times:";
    cin >> k;
    Solution r;
    r.rotateArray(nums,k);
    for(int i=0;i<n;i++){
        cout << nums[i] << " ";
    }
}
