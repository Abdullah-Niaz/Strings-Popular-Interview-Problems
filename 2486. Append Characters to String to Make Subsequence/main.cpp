#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    int appendCharacters(string s, string t)
    {
        int m = s.length();
        int n = t.length();

        int i = 0; // pointing to the string s
        int j = 0; // pointing to the string t

        while (i < m && j < n)
        {
            if (s[i] == t[j])
            {
                i++;
                j++;
            }
            else
            {
                i++;
            }
        }
        return n - j; // remaining character to be appended at the end of s
    }
};

int main()
{
    Solution sol;
    string s = "abc";
    string t = "cde";
    cout << "Characters to append: " << sol.appendCharacters(s, t) << endl;
    return 0;
}
