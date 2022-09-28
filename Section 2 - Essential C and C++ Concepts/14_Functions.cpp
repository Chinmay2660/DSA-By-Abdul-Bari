#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int add(int a, int b)
{
    int c = a + b;
    return c;
}

int main()
{
    int a = 10;
    int b = 20;
    int c = add(a, b);
    cout << "Sum: " << c << endl;
    return 0;
}