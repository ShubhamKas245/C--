// Given an array a[n] you have to count in array
// An element is leader if it's is strictly greater than max of elements int it's right.
// arr={15 -1 7 2 5 4 2 3}

#include <iostream>
using namespace std;

int rightMaxCount(int a[], int n)
{
    int count = 1;
    int maxEle = a[n - 1];
    if (n > 0)
    {
        for (int i = n - 2; i >= 0; i--)
        {
            if (a[i] > maxEle)
            {
                count++;
                maxEle = a[i];
            }
        }
    }
    return count;
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
    cout << "Total right Max Element : ";
    cout << rightMaxCount(a, n);
}