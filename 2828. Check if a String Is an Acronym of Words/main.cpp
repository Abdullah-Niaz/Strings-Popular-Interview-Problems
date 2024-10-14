#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isAcronym(vector<string> &words, string s)
{
    // Initialize an empty string to store the acronym
    string acronym = "";

    // Loop through each word and concatenate the first character
    for (const string &word : words)
    {
        acronym += word[0];
    }

    // Check if the constructed acronym matches the string s
    return acronym == s;
}

int main()
{
    // Test case 1
    vector<string> words1 = {"alice", "bob", "charlie"};
    string s1 = "abc";
    cout << (isAcronym(words1, s1) ? "true" : "false") << endl; // Output: true

    // Test case 2
    vector<string> words2 = {"an", "apple"};
    string s2 = "a";
    cout << (isAcronym(words2, s2) ? "true" : "false") << endl; // Output: false

    // Test case 3
    vector<string> words3 = {"never", "gonna", "give", "up", "on", "you"};
    string s3 = "ngguoy";
    cout << (isAcronym(words3, s3) ? "true" : "false") << endl; // Output: true

    return 0;
}
