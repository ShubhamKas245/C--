// Print floyd's Triangle

#include <iostream>
using namespace std;

int main()
{
    int n, k = 1;
    cout << "Enter the Row : ";
    cin >> n;
    cout << "Printing Floyd's Triangle " << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << k << " ";
            k++;
        }
        cout << endl;
    }
    return 0;
}