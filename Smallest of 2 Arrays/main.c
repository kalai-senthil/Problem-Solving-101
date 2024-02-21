#include <stdio.h>
#include <limits.h>
int found(int *ar, int n, int f)
{
    for (int i = 0; i < n; i++)
    {
        if (*(ar + i) == f)
        {
            return i;
        }
    }
    return -1;
}
int small(int *ar, int n)
{
    int ss = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (*(ar + i) < ss)
        {
            ss = *(ar + i);
        }
    }
    return ss;
}

void main()
{
    int n, n1;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &n1);
    int a1[n1];
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &a1[i]);
    }
    int ff[n + n1], ffi = 0;
    int idx;
    for (int i = 0; i < n; i++)
    {
        int sm = a[i];
        if (found(a1, n1, sm) != -1)
        {
            ff[ffi] = sm;
            ffi++;
        }
    }

    if (ffi == 0)
    {
        printf("%d", -1);
        return;
    }
    printf("%d", small(ff, ffi));
}