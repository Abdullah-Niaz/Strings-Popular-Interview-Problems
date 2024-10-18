#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
    string decodeAtIndex(string s, int k)
    {
        long long size = 0;

        // Step 1: Calculate the total size of the decoded string
        for (char ch : s)
        {
            if (isdigit(ch))
            {
                size *= (ch - '0');
            }
            else
            {
                size++;
            }
        }

        // Step 2: Iterate the string from the end and decode
        for (int i = s.length() - 1; i >= 0; i--)
        {
            k %= size; // Wrap the k index

            // If k is 0 and the character is a letter, it's the answer
            if (k == 0 && isalpha(s[i]))
            {
                return string(1, s[i]);
            }

            // Adjust the size based on the character
            if (isdigit(s[i]))
            {
                size /= (s[i] - '0');
            }
            else
            {
                size--;
            }
        }

        return "";
    }
};

int main()
{
    Solution solution;
    string s = "leet2code3";
    int k = 10;

    cout << "Character at index " << k << ": " << solution.decodeAtIndex(s, k) << endl;

    return 0;
}
