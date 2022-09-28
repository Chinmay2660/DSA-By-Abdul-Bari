#include <iostream>
using namespace std;

int main()
{
    int A[10] = {2, 4, 6, 8, 10};
    for (int x : A)
    {
        cout << x << endl;
    }
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int B[n];
    B[0] = 1;
    for (int i = 0; i < n; i++)
    {
        cout << B[i] << endl;
    }

    return 0;
}