// Find the last Occurence of x in the array

#include <iostream>
#include <vector>
using namespace std;

int lastOccur(vector<int> a,int x){
    int idx=-1;
    for(int i=a.size();i>0;i--){
        if(a[i]==x){
            return i;
            break;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }
    int x;
    cin>>x;
    cout<<"Last Occurence : ";
    int last=lastOccur(v,x);
    cout<<last<<endl;
}