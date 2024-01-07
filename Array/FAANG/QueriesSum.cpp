// Find Queries of Sum

#include <iostream>
using namespace std;

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
    ps[0]=a[0];
    for(int i=1;i<n;i++){
        ps[i]=ps[i-1]+a[i];
    }
    int start,end;
    int q;
    cout<<"No of queries : ";
    cin>>q;
    while(q>0){
        cin>>start>>end;
        if(start!=0){
            cout<<ps[end]-ps[start-1];
        }else {
            cout<<ps[end];
        }
        q--;
    }

}