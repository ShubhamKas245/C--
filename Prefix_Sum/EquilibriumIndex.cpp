// Find Equlibirum Index of array

#include <iostream>
using namespace std;

int eqlubriumIndex(int a[], int n)
{
    int ps[n];
    ps[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        ps[i] = ps[i - 1] + a[i];
    }
    for (int i = 1; i < n; i++)
    {
        int sumLeft = ps[i - 1];
        int sumRight = ps[n - 1] - ps[i];
        if (sumLeft == sumRight)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the array Size : ";
    cin >> n;
    int a[n];
    cout << "Enter the array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Eqlubrium Index : ";
    cout << eqlubriumIndex(a, n);
}