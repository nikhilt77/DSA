#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        return accumulate(nums.begin(),nums.end(),0,bit_xor<int>());
    }
};
int main(){
    Solution s;
    vector<int> nums;
    int n;
    cout<< "Enter size:"<<endl;
    cin >> n;
    cout << "Enter elements:"<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        nums.push_back(x);
    }
    cout << "The number is" << s.singleNumber(nums) << endl;
}
