#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    bool isVowel(char &ch)
    {
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
    }

    bool halvesAreAlike(string s)
    {
        int n = s.length();
        int mid = n / 2;
        int countL = 0, countR = 0;

        for (int i = 0; i < mid; i++)
        {
            if (isVowel(s[i]))
            {
                countL++;
            }
            if (isVowel(s[i + mid]))
            {
                countR++;
            }
        }

        return countL == countR;
    }
};

int main()
{
    Solution solution;
    string s;
    cout << "Enter the string: ";
    cin >> s;

    bool result = solution.halvesAreAlike(s);
    if (result)
    {
        cout << "The halves are alike." << endl;
    }
    else
    {
        cout << "The halves are not alike." << endl;
    }

    return 0;
}
