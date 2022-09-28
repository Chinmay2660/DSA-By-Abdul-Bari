#include <stdio.h>
// Recursive function to calculate sum of natural numbers
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return sum(n - 1) + n;
    }
}
// Iterative solution
int Isum(int n)
{
    int s = 0;
    int i;
    for (i = 1; i <= n; i++)
    {
        s += i;
    }
    return s;
}

int main()
{

    int r;
    r = Isum(5);
    printf("%d\n", r);

    return 0;
}