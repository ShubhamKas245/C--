// Print all alphabets(uppercase) with their ASCII Values

#include <iostream>
using namespace std;

int main()
{

    cout << "ASCII value of alphabets : ";

    for (int i = 65; i <= 90; i++)
    {
        cout << char(i) << " " << i << " ";
    }
    return 0;
}