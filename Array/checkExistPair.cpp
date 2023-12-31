// Given N array elements. checks if there exists a pair(i,j),such that
// arr[i]+arr[i]==k && i!=j;      arr=[3 -2 1 4 3 6 8 ]

#include <iostream>
using namespace std;

bool checkPairs(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                return true;
            }
        }
    }
    return false;
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
    cout << "Enter the value of K : ";
    cin >> k;

    if (checkPairs(ar, n, k))
    {
        cout << "Pair Exists" << endl;
    }
    else
    {
        cout << "Not Exists" << endl;
    }
    return 0;
}
