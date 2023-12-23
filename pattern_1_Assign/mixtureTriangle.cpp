// Print the mixture triangle

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the row : ";
    cin >> n;
    cout << "Printing Mixture triangle" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 != 0)
            {
                cout << j << " ";
            }
            else
            {
                cout << char(j + 'A' - 1)<<" ";
            }
        }
        cout << endl;
    }
}