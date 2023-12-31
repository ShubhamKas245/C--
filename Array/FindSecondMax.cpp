// Find Second Max Element in Array

#include <iostream>
#include <climits>
using namespace std;

int secondMax(int arr[], int n)
{
    int max = INT_MIN;
    int secondMax = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            secondMax = max;
            max = arr[i];
        }
    }
    return secondMax;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Second Max Element : ";
    int secMax = secondMax(arr, n);
    cout << secMax << endl;
}