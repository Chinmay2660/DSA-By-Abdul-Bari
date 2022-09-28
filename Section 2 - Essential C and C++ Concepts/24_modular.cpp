#include <iostream>
#include <stdio.h>

using namespace std;

int area(int length, int breadth)
{
    return length * breadth;
}

int perimeter(int length, int breadth)
{
    int p;
    p = 2 * (length + breadth);
    return p;
}

int main()
{
    int length, breadth;
    printf("Enter the length and breadth of the rectangle: ");
    cin >> length >> breadth;

    int a = area(length, breadth);
    int peri = perimeter(length, breadth);

    printf("Area of the rectangle is %d\nPerimeter of the rectangle is %d\n", a, peri);

    return 0;
}