#include <iostream>
using namespace std;

char findTheDifference(string s, string t)
{
    int xor_result = 0;

    // XOR all characters in s
    for (char c : s)
    {
        xor_result ^= c;
    }

    // XOR all characters in t
    for (char c : t)
    {
        xor_result ^= c;
    }

    // The result will be the extra character in t
    return xor_result;
}

int main()
{
    string s = "abcd";
    string t = "abcde";

    char result = findTheDifference(s, t);
    cout << "The extra character is: " << result << endl;

    return 0;
}
