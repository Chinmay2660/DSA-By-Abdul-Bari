#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    struct Rectangle *p;
    p = new Rectangle;

    p->length = 10;
    p->breadth = 20;

    cout << "Length: " << p->length << endl;
    cout << "Breadth: " << p->breadth << endl;

    return 0;
}