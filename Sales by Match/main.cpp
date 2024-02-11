int sockMerchant(int n, vector<int> ar)
{
    vector<int> sum(101);
    int ss = 0;
    for (int i = 0; i < ar.size(); i++)
    {
        // cout<<sum[ar.at(i)]<<" ";
        sum[ar.at(i)]++;
        if (sum[ar.at(i)] == 2)
        {
            sum[ar.at(i)] = 0;
            ss++;
        }
    }
    return ss;
}