#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << "\n";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << "\n";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = 3; i >= 0; i--)
    {

        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j <= i; j++)
        {

            cout << ((i + j) % 2 == 0 ? 1 : 0) << " ";
        }
        cout << "\n";
    }
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {

            cout << j;
        }
        for (int j = 1; j <= 2 * n - 2 * i; j++)
        {

            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {

            cout << j;
        }
        cout << "\n";
    }
    int jjj = 1;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j <= i; j++)
        {

            cout << jjj++ << " ";
        }
        cout << "\n";
    }
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j <= i; j++)
        {

            cout << (char)(65 + j) << " ";
        }
        cout << "\n";
    }
    for (int i = n; i > 0; i--)
    {

        for (int j = 0; j < i; j++)
        {

            cout << (char)(65 + j) << " ";
        }
        cout << "\n";
    }
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n - i - 1; j++)
        {

            cout << " ";
        }
        int mid = (2 * i + 1) / 2;
        int minus = 0;
        char d = 'A';
        for (int j = 0; j < i; j++)
        {
            cout << d++;
        }
        cout << d--;
        for (int j = 0; j < i; j++)
        {
            cout << d--;
        }
        for (int j = 0; j < n - i - 1; j++)
        {

            cout << " ";
        }
        cout << "\n";
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {

            cout << (char)(65 + (n - i + j - 1)) << " ";
        }
        cout << "\n";
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {

            cout << "*";
        }
        for (int j = 0; j < 2 * i; j++)
        {

            cout << " ";
        }
        for (int j = 0; j < n - i; j++)
        {

            cout << "*";
        }
        cout << "\n";
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {

            cout << "*";
        }
        for (int j = 0; j < n - (2 * i) + 1; j++)
        {

            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {

            cout << "*";
        }
        cout << "\n";
    }
    cout << "----------------\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {

            cout << "*";
        }
        for (int j = 0; j < n - (2 * i) + 1; j++)
        {

            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {

            cout << "*";
        }
        cout << "\n";
    }

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < i + 1; j++)
        {

            cout << "*";
        }
        for (int j = 0; j < n - (2 * i) + 1; j++)
        {

            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {

            cout << "*";
        }
        cout << "\n";
    }
    cout << "----------------\n";

    for (int i = 1; i <= n; i++)
    {
        if (i == 1 || i == n)
        {
            for (int j = 0; j < n; j++)
            {

                cout << "*";
            }
            cout << "\n";
            continue;
        }
        for (int j = 0; j < n; j++)
        {

            if (j == 0 || j == n - 1)
            {
                cout << "*";
                continue;
            }
            cout << " ";
        }
        cout << "\n";
    }
    cout << "----------------\n";
}