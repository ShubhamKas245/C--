// Find Maximum subarray sum whose length is k;

#include <iostream>
using namespace std;


// using sliding window technique
int maxSubArrSum(int a[], int n, int k)
{
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += a[i];
    }
    int max = sum;
    for (int i = 1; i <= n - k; i++)
    {
        sum = sum + a[i + k - 1] - a[i - 1];
        if (sum > max)
        {
            max = sum;
        }
    }
    return max;
}

int main()
{
    int n;
    cout << "Enter the Size of array : ";
    cin >> n;
    int a[n];
    cout << "Enter the array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k;
    cout << "Enter the length K :";
    cin >> k;
    cout << "Maximum Subarray Sum :";
    cout << maxSubArrSum(a, n, k);
}