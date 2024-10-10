#include <iostream>
#include <sstream> // for istringstream
using namespace std;

int countSegments(string s)
{
    istringstream stream(s); // create a stream from the string
    string segment;
    int count = 0;

    // Extract each word (segment) from the string
    while (stream >> segment)
    {
        count++;
    }

    return count;
}

int main()
{
    string s = "Hello, my name is John";
    cout << "Number of segments: " << countSegments(s) << endl;
    return 0;
}
