// Print the Alphabet Square

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Row : ";
    cin >> n;
    cout << "Printing Alphabet Square " << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << char(j + 64) << " ";
        }
        cout << endl;
    }
    return 0;
}