#include <iostream>
#include <string>
#include <algorithm>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        if (s.length() != t.length()) {
            return false;
        }
        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());
        return s == t;
    }
};

int main() {
    Solution solution;

    std::string s, t;
    std::cout << "Enter first string: ";
    std::cin >> s;
    std::cout << "Enter second string: ";
    std::cin >> t;

    if (solution.isAnagram(s, t)) {
        std::cout << "The strings are anagrams." << std::endl;
    } else {
        std::cout << "The strings are not anagrams." << std::endl;
    }

    return 0;
}
