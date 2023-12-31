// Given n array elements.Rotate array from last to first by K times (Google,Amazone)

#include <iostream>
using namespace std;

void rotateK(int a[], int s, int e)
{

    while (s < e)
    {
        swap(a[s], a[e]);
        s++;
        e--;
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
    int ar[n];
    cout << "Enter the array elements " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int k;
    cout << "Enter value of K : ";
    cin >> k;
    k%=n;
    cout << "Printing Array After K times rotations" << endl;
    rotateK(ar, 0, n - 1);
    rotateK(ar, 0, k - 1);
    rotateK(ar, k, n - 1);
    printing(ar, n);
}