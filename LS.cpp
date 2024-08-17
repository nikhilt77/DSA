
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:

    int searchInSorted(int arr[], int n, int K) {
        int flag=-1;
        for(int i=0;i<n;i++){
            if(K==arr[i]){
                flag=1;
            }
        }
        if(flag!=-1){
            return flag;
        }
        else{
            return -1;
        }
    }
};

int main(void) {

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.searchInSorted(arr, n, k) << endl;
    }

    return 0;
}

