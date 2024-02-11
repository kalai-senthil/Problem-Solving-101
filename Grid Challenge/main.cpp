string gridChallenge(vector<string> grid)
{
    bool y = true;
    for (int i = 0; i < grid.size(); i++)
    {
        string s = grid[i];
        sort(s.begin(), s.end());
        grid[i] = s;
    }
    for (int i = 0; i < grid.size() - 1; i++)
    {
        for (int j = 0; j < grid.size(); j++)
        {
            if (grid[i][j] > grid[i + 1][j])
            {
                y = false;
                break;
            }
        }
        if (!y)
        {
            break;
        }
    }
    return y ? "YES" : "NO";
}