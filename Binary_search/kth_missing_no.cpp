#include<bits/stdc++.h>
using namespace std;

int kth_missing(int arr[],int n,int k){
   int low=0,high=n-1;
   while(low<=high){
    int mid=(low+high)/2;
    int missing=arr[mid]-(mid+1);
    if(missing<k) low=mid+1;
    else high=mid-1;
   }
   return high+k+1;
}

int main(){
    int n;
    cout<<"enter the size of array :";
    cin>>n;
    int arr[n];
    cout<<"enter the element in array : ";
    for(int i=0;i<n;i++) cin>>arr[i];
    int k;
    cout<<"enter which missing element you want to find : ";
    cin>>k;
    int result=kth_missing(arr,n,k);
    cout<<"element is : "<<result;
    return 0;
}