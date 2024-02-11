string caesarCipher(string s, int k)
{
    char ar[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    for (int i = 0; i < s.size(); i++)
    {
        int cc = s[i];
        if (cc >= 97 && cc <= 122)
        {
            s[i] = (char)(ar[((cc - 97) + k) % 26]);
        }
        if (cc >= 65 && cc <= 90)
        {
            s[i] = (char)(ar[((cc - 65) + k) % 26] - 32);
        }
    }
    return s;
}