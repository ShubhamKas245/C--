// Reverse the Subarray

#include <iostream>
#include <algorithm>
using namespace std;

void reverseSub(int a[], int start, int end)
{
    while (start < end)
    {
        swap(a[start], a[end]);
        start++;
        end--;
    }
}

void printing(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int a[n];
    cout << "Enter the elements" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int s;
    cout<< "Start index : ";
    cin >> s;
    int e;
    cout<<"End index : ";
    cin >> e;
    cout << "Starting from " << s << " to " << e << endl;
    reverseSub(a, s, e);
    printing(a, n);
}