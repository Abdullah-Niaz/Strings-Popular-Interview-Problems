#include <iostream>
using namespace std;

class Solution
{
public:
    bool allCapital(string word)
    {
        for (char &ch : word)
        {
            if (ch < 'A' || ch > 'Z')
            {
                return false;
            }
        }
        return true;
    }

    bool allSmall(string word)
    {
        for (char &ch : word)
        {
            if (ch < 'a' || ch > 'z')
            {
                return false;
            }
        }
        return true;
    }

    bool detectCapitalUse(string word)
    {
        if (allCapital(word) || allSmall(word) || allSmall(word.substr(1)))
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
