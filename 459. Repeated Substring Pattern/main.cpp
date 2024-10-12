#include <iostream>
#include <string>

using namespace std;

bool repeatedSubstringPattern(string s) {
    // Concatenate the string with itself
    string doubled = s + s;
    
    // Remove the first and last characters of the concatenated string
    string modified_string = doubled.substr(1, doubled.size() - 2);
    
    // Check if the original string is a substring of the modified string
    return modified_string.find(s) != string::npos;
}

int main() {
    string s1 = "abab";
    string s2 = "aba";
    string s3 = "abcabcabcabc";
    
    cout << boolalpha;  // To print true/false instead of 1/0
    cout << "Test case 1: " << repeatedSubstringPattern(s1) << endl;  // Output: true
    cout << "Test case 2: " << repeatedSubstringPattern(s2) << endl;  // Output: false
    cout << "Test case 3: " << repeatedSubstringPattern(s3) << endl;  // Output: true
    
    return 0;
}
