#include <bits/stdc++.h>
using namespace std;
vector<int> rotateArray(vector<int> arr, int k)
{
    int n = arr.size();
    int timesToRotate = k % n;
    if (timesToRotate == n)
        return arr;
    int temp[timesToRotate];
    for (int i = 0; i < timesToRotate; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = timesToRotate; i < n; i++)
    {
        arr[i - timesToRotate] = arr[i];
    }
    for (int i = n - timesToRotate; i < n; i++)
    {

        arr[i] = temp[i - n - timesToRotate];
    }
    return arr;
}

int main()
{
    vector<int> arr = {1, 3, 6, 11, 12, 17};
    for (int a : rotateArray(arr, 4))
    {
        cout << a << " ";
    }
}