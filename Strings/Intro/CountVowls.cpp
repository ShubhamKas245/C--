// Input a string of length n and count all the vowels in the given string

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Shubham";
    int count = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'i' || str[i] == 'e' || str[i] == 'o' || str[i] == 'a' || str[i] == 'v')
        {
            count++;
        }
        i++;
    }
    cout << count << endl;
}
