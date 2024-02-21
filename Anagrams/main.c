#include <stdio.h>

void main()
{
    int n;
    scanf("%d", &n);
    int dd[26] = {0};
    for (int i = 0; i < n + 1; i++)
    {
        char a = getchar();
        if (a != '\n')
        {
            dd[a - 65]++;
        }
    }

    for (int i = 0; i < n + 2; i++)
    {
        char a = getchar();
        if (a != '\n')
        {
            dd[a - 65]++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (dd[i] % 2 != 0)
        {
            printf("%d", 0);
            return;
        }
    }
    printf("%d", 1);
}