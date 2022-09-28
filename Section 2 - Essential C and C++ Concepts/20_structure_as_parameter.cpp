#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

void fun(struct Rectangle r)
{
    r.length = 10;
    cout << "Length: " << r.length << endl;
    cout << "Breadth: " << r.breadth << endl;
}

void fun(struct Rectangle *p)
{
    p->length = 20;
    cout << "Length: " << p->length << endl;
    cout << "Breadth: " << p->breadth << endl;
}

struct Rectangle *fun()
{
    struct Rectangle *p;
    p = new Rectangle;
    //  p = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    p->length = 30;
    p->breadth = 40;
    return p;
}

int main()
{
    struct Rectangle r = {10, 5};
    fun(r);
    fun(&r);

    printf("Length: %d\nBreadth %d\n", r.length, r.breadth);

    struct Rectangle *ptr = fun();

    cout << "Length: " << ptr->length << endl;
    cout << "Breadth: " << ptr->breadth << endl;
    return 0;
}