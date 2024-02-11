def superDigit(n, k):
    if(len(n) == 1):
        return int(n)
    s = sum(map(int,n)) * k
    return superDigit(str(s),1)
    