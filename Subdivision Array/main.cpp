#include <vector>
using namespace std;
int birthday(vector<int> s, int d, int m)
{
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int sum = 0;
        for (int j = i; j < m + i; j++) // segmenting
        {
            sum = sum + s[j];
        }
        if (sum == d)
        {
            count++;
        }
    }
    return count;
}