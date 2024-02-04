#include <iostream>
int main()
{
    long n, sum = 0l, prev = 1, next = 1, val = 1;
    std::cout << "Enter N:";
    std::cin >> n;
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
    std::cout << "Sum: " << sum << "\n";
    return 0;
}