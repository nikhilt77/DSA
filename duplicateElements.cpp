#include<iostream>
#include<unordered_set>
#include<vector>

using namespace std;

class Duplicate{
    public:
    bool checkDuplicate(vector<int> nums){
        unordered_set<int> seen;
        for(int ele:nums){
            if(seen.find(ele)!=seen.end()){
                return true;
            }
            else{
                seen.insert(ele);
            }
        }
        return false;
    }

};

int main(){
    Duplicate d;
    vector<int> nums;
    int n;
    cout << "Enter number of elements:";
    cin >> n;
    cout << "Enter elements:" << endl;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        nums.push_back(x);
    }
    if(d.checkDuplicate(nums)){
        cout << "Duplicates found";
    }
    else{
        cout << "No duplicates found";
    }
    return 0;
}
