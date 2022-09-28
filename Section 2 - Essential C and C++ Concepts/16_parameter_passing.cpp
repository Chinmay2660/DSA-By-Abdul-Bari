#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 10;
    int b = 20;
    swap(&a, &b);
    cout << "First Number : " << a << endl;
    cout << "Second Number : " << b << endl;
    return 0;
}