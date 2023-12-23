// Print Odd number Triangle

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Row : ";
    cin >> n;
    cout << "Printing odd number Triangle " << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * i - 1; j += 2)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}