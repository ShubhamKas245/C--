
// Print solid Rectangle

#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter the row : ";
    cin >> row;
    cout << "Enter the col : ";
    cin >> col;
    cout << "Printing Solid Rectangle " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}