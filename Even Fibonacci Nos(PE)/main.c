#include <stdio.h>
void main(int argsV, char **args)
{
    long n, sum = 0l, prev = 1, next = 1, val = 1;
    sscanf(args[1], "%lu", &n);
    while (val <= 4000000)
    {
        printf("%lu\n", val);
        val = next + prev;
        if (val % 2 == 0)
        {
            sum += val;
        }
        prev = next;
        next = val;
    }
    printf("Sum: %d", sum);
}