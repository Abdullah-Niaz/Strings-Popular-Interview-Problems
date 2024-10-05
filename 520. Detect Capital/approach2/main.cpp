#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    bool detectCapitalUse(string word)
    {
        int countCapital = 0;

        // Count the number of uppercase characters
        for (char &ch : word)
        {
            if (isupper(ch))
            {
                countCapital++;
            }
        }

        // Check if all letters are lowercase
        if (countCapital == 0)
        {
            return true;
        }

        // Check if all letters are uppercase
        if (countCapital == word.length())
        {
            return true;
        }

        // Check if only the first letter is uppercase
        if (countCapital == 1 && isupper(word[0]))
        {
            return true;
        }

        return false;
    }
};

int main()
{
    Solution solution;
    string word = "USA"; // Example word
    bool result = solution.detectCapitalUse(word);
    cout << (result ? "True" : "False") << endl;
    return 0;
}
