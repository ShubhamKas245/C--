#include <iostream>
using namespace std;

int greaterthanItself(int a[], int n)
{
    int max = a[0];
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == max)
        {
            count++;
        }
    }
    return n - count;
}
// using 1 loop
int countGreater(int a[], int n)
{
    int max = a[0];
    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            cnt = 1;
        }
        else if (a[i] == max)
        {
            cnt++;
        }
    }
    return n - cnt;
}

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int ar[n];
    cout << "Enter the array elements " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    // int great = greaterthanItself(ar, n);
    int great = countGreater(ar, n);
    cout << "Total Element greater than itself : ";
    cout << great << endl;
}