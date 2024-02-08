#include <bits/stdc++.h>
#include <vector>
#include <string>

int main()
{
}
vector<string> solution(vector<string> inputArray)
{
    int max = 0;
    map<int, vector<string>> vals;
    for (vector<string>::iterator a = inputArray.begin(); a < inputArray.end(); a++)
    {
        int len = (*a).length();
        if (len > max)
        {
            max = len;
        }
        vals[len].push_back(*a);
    }
    return vals[max];
}
