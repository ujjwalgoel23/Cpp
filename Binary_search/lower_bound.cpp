#include<bits/stdc++.h>
using namespace std;

int lower_bound(int arr[],int n,int x){
 int ans=n;
 int low=0,high=n-1;
 while(low<=high){
    int mid=(low+high)/2;
    if(x<=arr[mid]){
        ans=mid;
        high=mid-1;
    }
    else low=mid+1;
 }
 return ans;
} 

int main(){
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"enter the element in array : ";
    for(int i=0;i<n;i++) cin>>arr[i];
    int x;
    cout<<"enter the value of lower bound ";
    cin>>x;
   int result= lower_bound(arr,n,x);
    cout<<" index at which lower bound  at "<<result;

    return 0;
}