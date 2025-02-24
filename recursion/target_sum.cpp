#include<bits/stdc++.h>
using namespace std;

bool is_find(int arr[],int n,int index,int target){
    if(target==0) return 1;
    if(target<0 ||index==n) return 0;
    return is_find(arr,n,index+1,target) || is_find(arr,n,index+1,target-arr[index]);
}

int main(){
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"enter the element in array : ";
    for(int i=0;i<n;i++)cin>>arr[i];
    int target;
    cout<<"enter the value of target : ";
    cin>>target;
    bool result=is_find(arr,n,0,target);
    if(result==true)cout<<"yes it is found ";
    else cout<<"no it is not found ";
    return 0;
}