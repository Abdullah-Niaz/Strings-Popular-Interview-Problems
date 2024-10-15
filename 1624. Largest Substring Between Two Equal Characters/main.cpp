#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxLengthBetweenEqualCharacters(string s)
{
    vector<int> first_occurrence(26, -1); // Initialize a vector for 26 lowercase letters
    int max_length = -1;

    // Traverse through the string
    for (int i = 0; i < s.length(); i++)
    {
        int charIndex = s[i] - 'a'; // Get the index of the character ('a' -> 0, 'b' -> 1, etc.)

        if (first_occurrence[charIndex] == -1)
        {
            // Record the first occurrence of the character
            first_occurrence[charIndex] = i;
        }
        else
        {
            // Calculate the length of the substring between two equal characters
            int length = i - first_occurrence[charIndex] - 1;
            max_length = max(max_length, length);
        }
    }

    return max_length;
}

int main()
{
    string s = "abca";
    cout << maxLengthBetweenEqualCharacters(s) << endl; // Output: 2

    return 0;
}
