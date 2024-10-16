#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    long long minimumSteps(string s)
    {
        int n = s.length();
        long long swap = 0;
        int black = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            { // move this to the right
                swap += black;
            }
            else
            {
                black++;
            }
        }
        return swap;
    }
};

int main()
{
    Solution solution;
    string s;
    cout << "Enter string of 0's and 1's: ";
    cin >> s;
    cout << "Minimum steps: " << solution.minimumSteps(s) << endl;
    return 0;
}
