#include <iostream>
#include <sstream>
#include <unordered_set>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

string mostCommonWord(string paragraph, vector<string> &banned)
{
    // Convert the paragraph to lowercase and replace punctuation with spaces
    for (char &c : paragraph)
    {
        if (ispunct(c))
        {
            c = ' '; // Replace punctuation with space
        }
        c = tolower(c); // Convert to lowercase
    }

    // Split paragraph into words
    istringstream iss(paragraph);
    string word;
    unordered_map<string, int> word_count;
    unordered_set<string> banned_set(banned.begin(), banned.end());

    // Count frequencies of non-banned words
    while (iss >> word)
    {
        if (banned_set.find(word) == banned_set.end())
        {
            word_count[word]++;
        }
    }

    // Find the most frequent non-banned word
    string most_common;
    int max_count = 0;
    for (const auto &entry : word_count)
    {
        if (entry.second > max_count)
        {
            max_count = entry.second;
            most_common = entry.first;
        }
    }

    return most_common;
}

int main()
{
    vector<string> banned1 = {"hit"};
    string paragraph1 = "Bob hit a ball, the hit BALL flew far after it was hit.";
    cout << mostCommonWord(paragraph1, banned1) << endl; // Output: "ball"

    vector<string> banned2 = {};
    string paragraph2 = "a.";
    cout << mostCommonWord(paragraph2, banned2) << endl; // Output: "a"

    return 0;
}
