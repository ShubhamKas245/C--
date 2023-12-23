// Display the AP- 1 3 5 9.. upto 'n' terms

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int a=1;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a+=2;
    }
    return 0;
}