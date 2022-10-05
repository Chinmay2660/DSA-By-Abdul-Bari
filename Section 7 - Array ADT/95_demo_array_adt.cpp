#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Array
{
    // int *A;
    int A[20];
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;
    printf("\nElements are\n");
    for (i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
}

int main()
{
    // struct Array arr ;
    struct Array arr = {{2, 3, 4, 5, 6}, 20, 6};
    // int n, i;
    // printf("Enter size of array: ");
    // scanf("%d", &arr.size);
    // arr.A = (int *)malloc(arr.size * sizeof(int));
    // arr.length = 0;

    // printf("Enter number of numbers: ");
    // scanf("%d", &n);
    // printf("Enter all elements\n");
    // for (i = 0; i < n; i++)
    // {
    //     scanf("%d", &arr.A[i]);
    // }
    // arr.length = n;

    Display(arr);
    return 0;
}

// class Array
// {

// private:
//     int *A;
//     int size;
//     int length;

// public:
//     Array(int size)
//     {
//         this->size = size;
//         A = new int[size];
//     }

//     void create()
//     {
//         cout << "Enter number of elements: " << flush;
//         cin >> length;
//         cout << "Enter the array elements: " << endl;
//         for (int i = 0; i < length; i++)
//         {
//             cout << "Array element: " << i << " = " << flush;
//             cin >> A[i];
//         }
//     }

//     void display()
//     {
//         for (int i = 0; i < length; i++)
//         {
//             cout << A[i] << " ";
//         }
//     }

//     ~Array()
//     {
//         delete[] A;
//         cout << "Array destroyed" << endl;
//     }
// };

// int main()
// {
//     Array arr(10);
//     arr.create();
//     arr.display();

//     return 0;
// }