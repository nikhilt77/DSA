#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        int res = 0;
        for (char c : s) {
            res ^= c;
        }
        for (char c : t) {
            res ^= c;
        }
        return res;
    }
};

int main() {
    Solution sol;
    string s, t;

    // Taking input from the user
    cout << "Enter string s: ";
    cin >> s;
    cout << "Enter string t: ";
    cin >> t;

    // Finding and printing the extra character
    char result = sol.findTheDifference(s, t);
    cout << "The extra character is: " << result << endl;

    return 0;
}
