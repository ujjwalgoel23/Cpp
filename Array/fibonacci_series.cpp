#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    int arr[100];
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<n;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    cout<<"result : "<<arr[n-1]<<endl;
    return 0;
}