#include <iostream>
#include <vector>
#include <string>

using namespace std;

string restoreString(string s, vector<int>& indices) {
    int n = s.length();
    string result(n, ' '); // Create an empty string of length n
    
    // Place each character in its correct position based on indices
    for (int i = 0; i < n; i++) {
        result[indices[i]] = s[i];
    }
    
    return result;
}

int main() {
    string s = "codeleet";
    vector<int> indices = {4, 5, 6, 7, 0, 2, 1, 3};
    
    string shuffledString = restoreString(s, indices);
    cout << shuffledString << endl; // Output: "leetcode"

    return 0;
}
