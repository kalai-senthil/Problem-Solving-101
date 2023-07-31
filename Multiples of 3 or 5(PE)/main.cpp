#include <iostream>
int main()
{
    int n, i = 1, sum = 0;
    std::cout << "Enter N:";
    std::cin >> n;
    while (i <= n)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
        i++;
    }
    std::cout << "Sum: " << sum << "\n";
    return 0;
}