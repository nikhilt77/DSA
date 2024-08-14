#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:

    int print2largest(vector<int> &arr) {

        int max=1;
        int second=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>max){
                second=max;
                max=arr[i];
            }
            else if(arr[i]>second && arr[i]!=max){
                second=arr[i];
            }
        }
        if(second==0){
            return -1;
        }
        else{
            return second;
        }
    }
};


int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.print2largest(arr);
        cout << ans << endl;
    }
    return 0;
}
