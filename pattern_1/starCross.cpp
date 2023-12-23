// Printing the Star Cross Pattern

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Row : ";
    cin >> n;
    cout << "Printing Star Cross " << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j || i + j == n + 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}