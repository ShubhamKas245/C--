// Given an array of size N, asked q quries each quries can be 2 types
// 1. Sum of all even indices
// 2. Sum of all odd indices

#include <iostream>
using namespace std;

int oddEvenIndicesSum(int ps[], int start, int end, int type)
{
    int sum = 0;
    if (type == 1)
    { // Sum of even indices
        sum = ps[end];
        if (start > 0)
        {
            sum -= ps[start - 1];
        }
    }
    else if (type == 2)
    { // Sum of odd indices
        sum = ps[end - 1];
        if (start > 0)
        {
            sum -= ps[start - 1];
        }
    }
    return sum;
}


int main()
{
    int n;
    cout << "Enter the array Size : ";
    cin >> n;
    int a[n];
    cout << "Enter the array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ps[n];
    ps[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        ps[i] = ps[i - 1] + a[i];
    }

    int q;
    cout << "No of Queries : ";
    cin >> q;

    int type, s, e;
    while (q > 0)
    {
        cout << "Enter query type (1 or 2), start index, and end index: " << endl;
        cin >> type >> s >> e;

        if (type == 1 || type == 2)
        {
            int result = oddEvenIndicesSum(ps, s, e, type);
            cout << "Sum of " << (type == 1 ? "even" : "odd") << " indices from " << s << " to " << e << " is " << result << endl;
        }
        q--;
    }

    return 0;
}
