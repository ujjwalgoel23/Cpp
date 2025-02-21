#include<bits/stdc++.h>
using namespace std;

int find_high(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++) sum+=arr[i];
    return sum;
}

int func(int arr[],int capacity,int n){
    int load=0,day=1;
    for(int i=0;i<n;i++){
      if(arr[i]+load>capacity){
        load=arr[i];
        day++;
      }
      else load+=arr[i];
    }
    return day;
} 

int least_capacity(int arr[],int n, int days){
    int low=*max_element(arr,arr+n);
    int high=find_high(arr,n);
    while(low<=high){
        int mid=(low+high)/2;
        int check=func(arr,mid,n);
        if(check<=days) high=mid-1;
        else low=mid+1;
        
    }
    return low;
}

int main(){
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"enter the element in array : ";
    for(int i=0;i<n;i++) cin>>arr[i];
    int days;
    cout<<"enter no of days : ";
    cin>>days;
 int result=least_capacity(arr,n,days);
 cout<<"least capacity to carry in one day is : "<<result;
    return 0;
}