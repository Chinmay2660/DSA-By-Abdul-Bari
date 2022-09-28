#include <iostream>
#include <stdio.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

void initialize(struct Rectangle *r, int l, int b)
{
    r->length = l;
    r->breadth = b;
}

int area(struct Rectangle r)
{
    return r.length * r.breadth;
}

int perimeter(Rectangle r) // struct is not mandatory in cpp
{
    int p;
    p = 2 * (r.length + r.breadth);
    return p;
}

int main()
{
    Rectangle r = {0, 0};

    int l, b;
    // int length = 0, breadth = 0;
    printf("Enter the length and breadth of the rectangle: ");
    cin >> l >> b;

    initialize(&r, l, b);

    int a = area(r);
    int peri = perimeter(r);

    printf("Area of the rectangle is %d\nPerimeter of the rectangle is %d\n", a, peri);

    return 0;
}