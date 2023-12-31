// Find the doublet (Two Sum) in the array whose sum is equal to the give
// value of x;

#include <iostream>
#include <vector>
using namespace std;

void twoSum(vector<int> a, int x)
{
    for (int i = 0; i < a.size() - 1; i++)
    {
        for (int j = i + 1; j < a.size(); j++)
        {
            if (a[i] + a[j] == x)
            {
                cout << "(" << i << "," << j << ")" << endl;
            }
        }
    }
}

int main()
{
    int x;
    cout << "Enter the target : ";
    cin >> x;
    vector<int> v;
    int n;
    cout << "Enter the array size : ";
    cin >> n;

    cout << "Enter the array Elements" << endl;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }
    twoSum(v, x);
}