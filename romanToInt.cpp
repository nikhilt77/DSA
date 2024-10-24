#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int sum = 0, num = 0, prev = 0;
        for (int i = s.length() - 1; i >= 0; i--) {
            switch (s.at(i)) {
                case 'I': num = 1; break;
                case 'V': num = 5; break;
                case 'X': num = 10; break;
                case 'L': num = 50; break;
                case 'C': num = 100; break;
                case 'D': num = 500; break;
                case 'M': num = 1000; break;
            }
            if (num < prev) {
                sum -= num;
            } else {
                sum += num;
            }
            prev = num;
        }
        return sum;
    }
};

int main() {
    Solution sol;
    string roman;
    cout << "Enter a Roman numeral: ";
    cin >> roman;
    int result = sol.romanToInt(roman);
    cout << "The integer value is: " << result << endl;
    return 0;
}
