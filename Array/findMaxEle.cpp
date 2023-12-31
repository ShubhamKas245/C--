// Find Max Element in Array

#include <iostream>
using namespace std;

int maximumEle(int arr[], int n)
{
    int maxEle = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxEle)
        {
            maxEle = arr[i];
        }
    }
    return maxEle;
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
    cout << "MaxElement  : ";
    int Max = maximumEle(arr, n);
    cout << Max << endl;
}