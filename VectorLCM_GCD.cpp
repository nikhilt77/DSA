#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        long long ogA = A;
        long long ogB = B;
        while (B != 0) {
            long long temp = B;
            B = A % B;
            A = temp;
        }
        long long gcd = A;
        return {((ogA * ogB) / gcd), gcd};
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A, B;
        cin >> A >> B;
        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A, B);
        cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}
