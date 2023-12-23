// Print rhombus Pattern

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Value of N : ";
    cin >> n;
    cout << "Printing Rhombus Pattern : " << endl;
    // for (int i = 1; i <= n; i++)
    // {
    //     // for spaces
    //     for (int j = 1; j <= n - i; j++)
    //         cout << " ";

    //     for (int j = 1; j <= n; j++)
    //         cout << "* ";

    //     cout << endl;
    // }

    // Print reverse rhombus pattern
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j < i; j++) {
            cout << " ";
        }

        // Print asterisks
        for (int k = 1; k <= n; k++) {
            cout << "*";
        }

        // Move to the next line
        cout << endl;
    }
}