#include<bits/stdc++.h>
using namespace std;

int possible(int arr[],int size,int mid,int m,int k){
   int count=0,no_of_bouquets=0;
   for(int i=0;i<size;i++){
    if(arr[i]<=mid) count++;
    else{
        no_of_bouquets += count/k;
        count=0;
    }
   }
   no_of_bouquets += count/k;
   return (no_of_bouquets>=m);
}

int minimum_bouquets(int arr[],int size,int m,int k){
    long long val= m * k;
    if(val>size) return -1;
    int ans=INT_MAX;
    int low=*min_element(arr,arr+size);
    int high=*max_element(arr,arr+size);
    while(low<=high){
        int mid=(low+high)/2;
        if(possible(arr,size,mid,m,k)==true){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
}

int main(){
    int size;
    cout<<"enter the size of array :" ;
    cin>>size;
    int arr[size];
    cout<<"enter the element in array: ";
    for(int i=0;i<size;i++)cin>>arr[i];
   int k,m;
   cout<<"enter no. of bouquets : ";
   cin>>m;
   cout<<"enter no. of adjacent flower : ";
   cin>>k;
   int result= minimum_bouquets(arr,size,m, k);
   if(result== -1) cout<<"not possible "<<endl;
   else cout<<"no. of days : "<<result<<endl;
    return 0;
}