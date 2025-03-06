#include<bits/stdc++.h>
using namespace std;

int ways(int arr[],int n,int sum){
 if(sum==0) return 1;
 if(sum<0 ) return 0;
 int ans=0;
 for(int i=0;i<n;i++) ans+=ways(arr,n,sum-arr[i]);
return ans;
}

int main(){
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"enter the element in array : ";
    for(int i=0;i<n;i++)cin>>arr[i];
    int sum;
    cout<<"enter the value of sum";
    cin>>sum;
     int result=ways(arr,n,sum);
     cout<<result<<" ";
    return 0;
}