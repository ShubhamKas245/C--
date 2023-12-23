// Print Number Pyramid Triangle

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value : ";
    cin >> n;
    cout << "Printing Number Pyramid Triangle" << endl;
    for (int i = 1; i <= n; i++)
    {
        // for Spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k < i; k++)
        {
            cout << k;
        }
        for (int q = i; q >= 1; q--)
        {
            cout << q;
        }
        cout << endl;
    }
}