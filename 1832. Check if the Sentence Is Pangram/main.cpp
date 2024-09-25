#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    bool checkIfPangram(string sentence)
    {
        vector<int> arr(26, 0);
        for (char &ch : sentence)
        {
            int index = ch - 'a';
            arr[index]++;
        }
        for (int &count : arr)
        {
            if (count == 0)
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    Solution sol;
    string sentence = "thequickbrownfoxjumpsoverthelazydog";
    bool result = sol.checkIfPangram(sentence);
    if (result)
    {
        printf("It is a pangram!\n");
    }
    else
    {
        printf("It is not a pangram!\n");
    }
    return 0;
}
