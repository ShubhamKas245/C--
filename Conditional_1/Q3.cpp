

#include <iostream>
using namespace std;

int main()
{

    cout << "Enter Cost Price : ";
    int cp;
    cin >> cp;

    cout << "Enter Selling Price : ";
    int sp;
    cin >> sp;

    if (sp > cp)
    {
        cout << "Profit = " << sp-cp;
    }
    if (cp > sp)
    {
        cout << "Loss = " << cp-sp;
    }
    if (cp == sp)
    {
        cout << "No Profit & No Loss";
    }

    return 0;
}