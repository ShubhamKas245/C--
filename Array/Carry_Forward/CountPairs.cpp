// Count no of pairs
// given a char[] calculate no of pairs i, j sch that i<j a[i]=='g'  &&  a[j]=='a'
// note => all characters are lower case a={b a a g d c a g}

#include <iostream>
using namespace std;

int pairsCount(char ar[], int n)
{
    int ans = 0, cnt = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (ar[i] == 'g')
        {
            cnt++;
        }
        if (ar[i] == 'a')
        {
            ans = ans + cnt;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the array Size : ";
    cin >> n;
    char a[n];
    cout << "Enter the array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Total no of pairs : ";
    cout << pairsCount(a, n);
}