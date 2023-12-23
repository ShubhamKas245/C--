// Print the given pattern

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the row : ";
    cin >> n;

    cout << "Printing Star Triangle Flipped " << endl;
    for (int i = 1; i <= n; i++)
    {
        // for spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // for stars
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}