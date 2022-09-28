#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int length, breadth;
    printf("Enter the length and breadth of the rectangle: ");
    cin >> length >> breadth;

    int area = length * breadth;
    int perimeter = 2 * (length + breadth);

    printf("Area of the rectangle is %d\nPerimeter of the rectangle is %d\n", area, perimeter);

    return 0;
}