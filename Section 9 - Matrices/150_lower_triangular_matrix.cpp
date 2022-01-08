#include <iostream>
using namespace std;

class LTMatrix
{
private:
    int n;
    int *A;

public:
    LTMatrix()
    {
        n = 2;
        ;
        A = new int[2 * (2 + 1) / 2];
    }
    LTMatrix(int n)
    {
        this->n = n;
        A = new int[n * (n + 1) / 2];
    }
    ~LTMatrix()
    {
        delete[] A;
    }
    void Display();
    void setRowMajor(int i, int j, int x);
    void setColMajor(int i, int j, int x);
    int getRowMajor(int i, int j);
    int getColMajor(int i, int j);
    int getDimension()
    {
        return n;
    }
};

void LTMatrix::setRowMajor(int i, int j, int x)
{
    if (i >= j)
    {
        A[(i * (i - 1)) / 2 + j - 1] = x; // Row Major
    }
}

void LTMatrix::setColMajor(int i, int j, int x)
{
    if (i >= j)
    {
        A[n * (j - 1) - (((j - 2) * (j - 1)) / 2) + (i - j)] = x; // Column major
    }
}

int LTMatrix::getRowMajor(int i, int j)
{
    if (i >= j)
    {
        return A[(i * (i - 1)) / 2 + j - 1]; // Row Major
    }
    else
    {
        return 0;
    }
}

int LTMatrix::getColMajor(int i, int j)
{
    if (i >= j)
    {
        return A[n * (j - 1) - (((j - 2) * (j - 1)) / 2) + (i - j)]; // Column major
    }
    else
    {
        return 0;
    }
}

void LTMatrix::Display()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i >= j)
            {
                // cout << A[n * (j - 1) - (((j - 2) * (j - 1)) / 2) + (i - j)] << " ";  //Column Major
                cout << A[(i * (i - 1)) / 2 + j - 1] << " "; // Row Major
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int d;
    cout << "Enter Dimensions of Matrix: ";
    cin >> d;
    LTMatrix lt(d);
    int x;
    cout << "Enter All elements of Matrix: ";
    for (int i = 1; i <= d; i++)
    {
        for (int j = 1; j <= d; j++)
        {
            cin >> x;
            lt.setRowMajor(i, j, x);
        }
    }
    lt.Display();

    return 0;
}