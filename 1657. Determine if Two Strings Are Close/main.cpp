#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    bool closeStrings(string word1, string word2)
    {
        int m = word1.length();
        int n = word2.length();

        if (m != n)
        {
            return false;
        }

        vector<int> freq1(26);
        vector<int> freq2(26);

        for (int i = 0; i < m; i++)
        {
            char ch1 = word1[i];
            char ch2 = word2[i];

            int idx1 = ch1 - 'a';
            int idx2 = ch2 - 'a';
            freq1[idx1]++;
            freq2[idx2]++;
        }

        // 1st condition: all characters in word1 must be present in word2
        for (int i = 0; i < 26; i++)
        {
            if (freq1[i] != 0 && freq2[i] != 0)
                continue;
            if (freq1[i] == 0 && freq2[i] == 0)
                continue;
            return false;
        }

        // 2nd condition: frequencies must match after sorting
        sort(freq1.begin(), freq1.end());
        sort(freq2.begin(), freq2.end());

        return freq1 == freq2;
    }
};

int main()
{
    Solution solution;
    string word1 = "amma";
    string word2 = "mama";

    if (solution.closeStrings(word1, word2))
    {
        cout << "The words are close strings." << endl;
    }
    else
    {
        cout << "The words are not close strings." << endl;
    }

    return 0;
}
