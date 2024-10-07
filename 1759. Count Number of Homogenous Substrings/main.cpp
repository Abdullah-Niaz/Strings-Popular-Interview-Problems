#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int MOD = 1e9 + 7;

    int countHomogenous(string s) {
        int n = s.length();
        int result = 0;
        int length = 0;

        // Loop through the string to count homogenous substrings
        for (int i = 0; i < n; i++) {
            if (i > 0 && s[i] == s[i - 1]) {
                length += 1;  // Increment the length if current char is same as the previous
            } else {
                length = 1;  // Reset the length if the current char differs from the previous
            }
            result = (result + length) % MOD;  // Add the length and apply modulus
        }

        return result;
    }
};

int main() {
    Solution sol;
    string s = "abbcccaa";
    
    cout << "Number of homogenous substrings: " << sol.countHomogenous(s) << endl;

    return 0;
}
