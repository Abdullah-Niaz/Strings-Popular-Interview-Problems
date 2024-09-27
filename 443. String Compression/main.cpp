#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution
{
public:
    int compress(vector<char> &chars)
    {
        int n = chars.size();
        int index = 0;
        int i = 0;

        while (i < n)
        {
            char curr_char = chars[i];
            int count = 0;

            // Find the duplicates
            while (i < n && chars[i] == curr_char)
            {
                count++;
                i++;
            }

            // Assign the current character
            chars[index] = curr_char;
            index++;

            // If count is more than 1, convert the count to a string and append it
            if (count > 1)
            {
                string count_str = to_string(count);
                for (char ch : count_str)
                {
                    chars[index] = ch;
                    index++;
                }
            }
        }
        return index;
    }
};

int main()
{
    Solution solution;

    // Input from user
    cout << "Enter characters separated by spaces (e.g., a a b b c c c): ";
    vector<char> chars;
    char ch;
    while (cin >> ch)
    {
        chars.push_back(ch);
        if (cin.peek() == '\n')
            break; // Stop input when Enter key is pressed
    }

    // Compress the characters
    int compressed_length = solution.compress(chars);

    // Output the compressed list and its length
    cout << "Compressed list: ";
    for (int i = 0; i < compressed_length; i++)
    {
        cout << chars[i] << " ";
    }
    cout << endl;
    cout << "Length of compressed list: " << compressed_length << endl;

    return 0;
}
