#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        string result = "";
        pair<int, string> romanSymbols[] = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
            {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
            {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
        };

        for (auto &symbol : romanSymbols) {
            while (num >= symbol.first) {
                result += symbol.second;
                num -= symbol.first;
            }
        }

        return result;
    }
};

int main() {
    int num;
    cin >> num;
    Solution sol;
    cout << sol.intToRoman(num) << endl;
    return 0;
}
