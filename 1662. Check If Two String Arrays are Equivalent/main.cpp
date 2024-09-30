#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2)
    {
        int m = word1.size();
        int n = word2.size();

        int w1i = 0, i = 0;
        int w2i = 0, j = 0;

        while (w1i < m && w2i < n)
        {
            if (word1[w1i][i] != word2[w2i][j])
            {
                return false;
            }

            i++;
            j++;

            if (i == word1[w1i].length())
            {
                i = 0;
                w1i++;
            }

            if (j == word2[w2i].length())
            {
                j = 0;
                w2i++;
            }
        }
        return w1i == m && w2i == n;
    }
};

int main()
{
    Solution sol;

    vector<string> word1 = {"abc", "d"};
    vector<string> word2 = {"abcd"};

    bool result = sol.arrayStringsAreEqual(word1, word2);

    if (result)
    {
        cout << "The concatenations are equal." << endl;
    }
    else
    {
        cout << "The concatenations are not equal." << endl;
    }

    return 0;
}
