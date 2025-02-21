#include<bits/stdc++.h>
using namespace std;

bool canWePlace(int arr[],int n,int mid,int cows){
     int cntCows=1,last_cow=arr[0];
     for(int i=0;i<n;i++){
        if(arr[i]-last_cow>=mid){
          cntCows++;
          last_cow=arr[i];
        }
     }
     if(cntCows>=cows) return true;
     else return false;
}

int aggressiveCow(int arr[],int n,int cows){
    sort(arr,arr+n);
    int low=0,high=arr[n-1]-arr[0];
    while(low<=high){
        int mid=(low+high)/2;
        if(canWePlace(arr,n,mid,cows)==true) low=mid+1;
        else high=mid-1;
    }
    return high;
}

int main(){
  int n;
  cout<<"enter the size of array : ";
  cin>>n;
  int arr[n];
  cout<<"enter the element in array : ";
  for(int i=0;i<n;i++) cin>>arr[i];
  int cows;
  cout<<"ener the no. of cows : ";
  cin>>cows;
int result=aggressiveCow(arr,n,cows);
cout<<"ans is :" <<result;
 return 0;
}