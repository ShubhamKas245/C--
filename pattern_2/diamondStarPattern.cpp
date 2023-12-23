// Print Diamond Star Pattern

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value : ";
    cin >> n;
    cout << "Printing Number Pyramid Triangle" << endl;
    int nst = 1, nsp = n - 1;

    for (int i = i; i <= 2 * n - 1; i++)
    {
        // for spaces
        for (int j = 1; j <= nsp; j++)
        {
            cout << " ";
        }
        if (i <= n - 1)
            nsp--; 
        else
            nsp++;
        // for Star
        for (int k = 1; k <= nst; k++)
        {
            cout << "*";
        }
        if (i <= n - 1)
            nst += 2;
        else
            nst -= 2;

        cout << endl;
    }
}
