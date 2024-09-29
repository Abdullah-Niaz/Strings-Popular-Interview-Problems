// int_to_roman.cpp
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    string intToRoman(int num)
    {
        vector<int> val{1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        vector<string> sym{"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

        string result = "";

        for (int i = 0; i < 13; i++)
        {
            while (num >= val[i])
            {
                result += sym[i];
                num -= val[i];
            }
        }
        return result;
    }
};

int main()
{
    Solution sol;
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    cout << "Roman Numeral: " << sol.intToRoman(num) << endl;
    return 0;
}
