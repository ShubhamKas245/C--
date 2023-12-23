#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the row : ";
    cin >> n;
    cout << "Printing Asc & Desc" << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}