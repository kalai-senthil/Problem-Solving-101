#include <bits/stdc++.h>
#include <set>
using namespace std;

string pangrams(string s)
{
    int sum = 0;
    set<char> als = {};
    for (char c : s)
    {
        int as = c;
        if (as == 32)
        {
            continue;
        }
        if (as >= 97 && as <= 122)
        {
            as -= 32;
        }
        als.insert((char)as);
    }
    return als.size() == 26 ? "pangram" : "not pangram";
}
