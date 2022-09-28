#include <iostream>
#include <stdio.h>

using namespace std;

class Rectangle
{
public:
    int length;
    int breadth;

    void initialize(int l, int b)
    {
        length = l;
        breadth = b;
    }

    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        int p;
        p = 2 * (length + breadth);
        return p;
    }
};

int main()
{
    Rectangle r;

    int l, b;

    printf("Enter the length and breadth of the rectangle: ");
    cin >> l >> b;

    r.initialize(l, b);

    int a = r.area();
    int peri = r.perimeter();

    printf("Area of the rectangle is %d\nPerimeter of the rectangle is %d\n", a, peri);

    return 0;
}
