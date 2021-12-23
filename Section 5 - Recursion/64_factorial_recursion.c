#include <stdio.h>

int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return fact(n - 1) * n;
    }
}

int Ifact(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }
    return f;
}

int main()
{
    int r;
    r = Ifact(5);
    printf("%d\n", r);
    return 0;
}