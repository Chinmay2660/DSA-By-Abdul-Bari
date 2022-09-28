#include <stdio.h>
#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
    char x;
} r1, r2;            // r1 and r2 are global variables
struct Rectangle r3; // another way to declare a struct

int main()
{
    r1 = {10, 20};
    //    printf("%lu \n",sizeof(r1));

    r1.length = 15;
    r1.breadth = 25;
    cout << r1.length << endl;
    cout << r1.breadth << endl;
    return 0;
}
