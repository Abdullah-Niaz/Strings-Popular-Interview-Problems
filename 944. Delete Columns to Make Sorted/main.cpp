#include <iostream>
#include <vector>
#include <string>

using namespace std;

int minDeletionSize(vector<string> &strs)
{
    int n = strs.size();
    int k = strs[0].length();
    int count = 0;

    // Loop through each character position
    for (int i = 0; i < k; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (strs[j][i] < strs[j - 1][i])
            {
                count++;
                break;
            }
        }
    }

    return count;
}

int main()
{
    vector<string> strs = {"cba", "daf", "ghi"};
    cout << "Minimum deletions: " << minDeletionSize(strs) << endl;
    return 0;
}
