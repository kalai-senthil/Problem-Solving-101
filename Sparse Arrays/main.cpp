vector<int> matchingStrings(vector<string> strings, vector<string> queries)
{
    vector<int> vals(queries.size());
    int i, s;
    i = 0;
    for (string a : queries)
    {
        s = 0;
        for (auto b : strings)
        {
            if (a == b)
            {
                s++;
            }
        }
        vals[i++] = s;
    }
    return vals;
}