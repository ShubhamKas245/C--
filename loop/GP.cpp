// Display the GP-1,2 4 8 16,32,64

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the numbers : ";
    cin >> n;
    int a = 3;
    for (int i = 0; i < n; i++)
    {
        cout << a << endl;
        a *= 3;
    }
    return 0;
}
