bool solution(int n)
{
    int numDigits = 0;
    int temp = n;
    while (temp != 0)
    {
        temp /= 10;
        numDigits++;
    }
    int halfD = numDigits / 2;
    int fH, sH, i = numDigits, val;
    fH = sH = 0;
    temp = n;
    while (temp != 0)
    {
        val = temp % 10;
        if (i > halfD)
        {
            sH += val;
        }
        else
        {
            fH += val;
        }
        temp /= 10;
        i--;
    }
    return fH == sH;
}
