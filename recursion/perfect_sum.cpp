#include<bits/stdc++.h>
using namespace std;

int is_find(int arr[],int n,int index,int sum){
    if(sum==0) return 1;
    if(sum<0 ||index==n) return 0;
    return is_find(arr,n,index+1,sum) + is_find(arr,n,index+1,sum-arr[index]);
}

int main(){
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"enter the element in array : ";
    for(int i=0;i<n;i++)cin>>arr[i];
    int sum;
    cout<<"enter the value of sum : ";
    cin>>sum;
    int result=is_find(arr,n,0,sum);
    cout<<"result : "<<result; 
    return 0;
}