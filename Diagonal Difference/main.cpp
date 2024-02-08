int diagonalDifference(vector<vector<int>> arr)
{
    int size = arr.size();
    int posD, negD;
    posD = negD = 0;
    for (int i = 0; i < size; i++)
    {
        posD += arr[i][i];
        negD += arr[i][size - i - 1];
    }
    return abs(posD - negD);
}