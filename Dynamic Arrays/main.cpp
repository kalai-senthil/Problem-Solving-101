vector<int> dynamicArray(int n, vector<vector<int>> queries)
{
    vector<vector<int>> arr(n);
    vector<int> res(0);
    int lastAnswer = 0;
    int idx, v, x, y;
    for (vector<int> a : queries)
    {
        v = a[0];
        x = a[1];
        y = a[2];
        switch (v)
        {
        case 1:
            idx = ((x ^ lastAnswer) % n);
            arr[idx].push_back(y);
            break;
        case 2:
            idx = ((x ^ lastAnswer) % n);
            lastAnswer = arr[idx][y % arr[idx].size()];
            res.push_back(lastAnswer);
            break;
        }
    }
    return res;
}