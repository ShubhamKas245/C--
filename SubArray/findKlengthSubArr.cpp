// Print the starting & ending index of of all subarray
// whose length=k arr={3 4 2 -1 6 7 8 9 3 2 -1 4} k=6

#include<iostream>
using namespace std;

void printKlenthSubArr(int a[],int n,int k){
    for(int i=0;i<=n-k;i++){
        int s=i;
        int e=i+k-1;
        cout<<"("<<s<<","<<e<<")"<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter array Size : ";
    cin>>n;
    int a[n];
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cout<<"Enter the length K :";
    cin>>k;
    printKlenthSubArr(a,n,k);
}