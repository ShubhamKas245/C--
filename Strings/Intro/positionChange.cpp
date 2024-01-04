// Input a string of size n and update the even position in the string to character 'a'. consider
// 0 based indexing.

#include <iostream>
#include <string>
using namespace std;

void changeIndexCharacter(char str[], int n)
{
    for (int i = 0; str[i] != '0'; i++)
    {
        if (i % 2 == 0)
        {
            str[i] = 'a';
        }
    }
    cout << str << endl;
}

int main()
{
    int n;
    cout << "Size of Character : ";
    cin >> n;
    char str[n];
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    changeIndexCharacter(str,n);
}
