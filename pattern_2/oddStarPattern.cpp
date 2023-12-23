// Write a Odd star Triangel

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the No : ";
    cin >> n;
    cout << "Printing Odd Star Triangle : " << endl;
    for (int i = 1; i <= n; i++)
    {
        // for spaces
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        // for Stars
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}