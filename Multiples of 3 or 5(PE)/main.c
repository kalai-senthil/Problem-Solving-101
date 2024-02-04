#include <stdio.h>
void main(int argsV, char **args)
{
    int n, i = 1, sum = 0;
    sscanf(args[1], "%d", &n);
    while (i <= n)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
        i++;
    }
    printf("Sum: %d", sum);
}