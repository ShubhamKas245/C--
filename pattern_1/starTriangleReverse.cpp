// Print the Star Triangle Reverse

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Row : ";
    cin >> n;
    cout << "Printing Star Triangle Reverse "<<endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}