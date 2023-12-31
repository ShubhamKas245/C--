// Reverse the entire array
#include <iostream>
using namespace std;

void revArr(int a[], int n)
{
    int p1 = 0;
    int p2 = n-1;
    while (p1 < p2)
    {
        swap(a[p1], a[p2]);
        p1++;
        p2--;
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
    int arr[n];
    cout << "Enter the array elements " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Printing Reverse array" << endl;
    revArr(arr, n);
    printing(arr, n);
}