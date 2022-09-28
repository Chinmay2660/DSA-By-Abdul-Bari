#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void fun(int A[])
{
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << endl;
    }
}
int main()
{
    int A[] = {1, 2, 3, 4, 5};
    int n = 5;
    fun(A);

    for (int x : A)
    {
        cout << x << " ";
    }
    return 0;
}