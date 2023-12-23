// Print the hollow Rectangle

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the row : ";
    cin >> n;
    cout << "Enter the col : ";
    cin >> m;

    // Print the top row
    for (int i = 1; i <= m; i++)
    {
        cout << "* ";
    }
    cout << endl;

    // Print the hollow part
    for (int i = 2; i <= n - 1; i++)
    {
        cout << "* "; // Print the left border

        // Print spaces or stars for the hollow part
        for (int j = 1; j <= m+2; j++)
            cout << " ";
        cout << "* ";

        cout << endl; // Print the right border
    }

    // Print the bottom row
    for (int i = 1; i <= m; i++)
    {
        cout << "* ";
    }

    return 0;
}
