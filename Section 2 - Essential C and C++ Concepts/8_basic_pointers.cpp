#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int a = 10;
    int *p;
    p = &a;
    cout << a << endl;
    printf("using pointer %d\n %d\n %d\n", *p, p, &a);

    int A[5] = {2, 4, 6, 8, 10};
    // int *p;
    p = &A[0]; // p = A
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << endl;
        cout << p[i] << endl;
    }

    p = (int *)malloc(5 * sizeof(int)); // using C
    p = new int[5];                     // using C++
    p[0] = 10;
    p[1] = 20;
    p[2] = 30;
    p[3] = 40;
    p[4] = 50;
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << endl;
    }

    delete[] p; // using C++
    free(p);    // using C

    struct Rectangle
    {
        int length;
        int breadth;
    };

    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;
    cout << sizeof(p1) << endl;
    cout << sizeof(p2) << endl;
    cout << sizeof(p3) << endl;
    cout << sizeof(p4) << endl;
    cout << sizeof(p5) << endl;

    return 0;
}