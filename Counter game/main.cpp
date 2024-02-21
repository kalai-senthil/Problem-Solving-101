#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'counterGame' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts LONG_INTEGER n as parameter.
 */
struct Pow
{
    bool isPower;
    long val;
};
Pow isPowersOf2(long n)
{
    bool f = false;
    Pow _pow = {false, n};
    long i = 1, val;
    do
    {
        val = pow(2, i);
        if (val > n)
        {
            break;
        }
        _pow.val = val;
        if (val == n)
        {
            _pow.isPower = true;
        }
        i++;
    } while (val <= n);
    return _pow;
}
string counterGame(long n, int i)
{
    Pow poww = isPowersOf2(n);
    // cout << poww.val << " " << poww.isPower << " ";
    if (poww.isPower)
    {
        n /= 2;
    }
    else
    {
        n -= poww.val;
    }
    if (n == 1)
    {
        return i % 2 == 0 ? "Louise" : "Richard";
    }

    return counterGame(n, i + 1);
}
string counterGame(long n)
{
    return counterGame(n, 0);
}

int main()
{

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++)
    {
        string n_temp;
        getline(cin, n_temp);

        long n = stol(ltrim(rtrim(n_temp)));

        string result = counterGame(n);

        cout << result << "\n";
    }

    return 0;
}

string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}
