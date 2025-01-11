#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(remove_if(s.begin(), s.end(), [](char c) { return !isalnum(c); }), s.end());
        int n = s.length() - 1;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for (int i = 0; i < s.length() / 2; i++) {
            if (s[i] != s[n--]) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    string input;
    getline(cin, input);
    Solution ob;
    cout << (ob.isPalindrome(input) ? "true" : "false") << endl;
    return 0;
}
