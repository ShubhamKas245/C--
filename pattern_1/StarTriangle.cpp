// Print Star Triangle

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Row : ";
    cin >> n;
    cout << "Printing Star Triangle " << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}