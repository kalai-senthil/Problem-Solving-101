#include <bits/stdc++.h>
using namespace std;
int sumOfAllDivisors(int n)
{
    int s = 0;
    for (int i = 1; i <= n; i++)
    {
        s += i * (n / i);
    }
    return s;
}
