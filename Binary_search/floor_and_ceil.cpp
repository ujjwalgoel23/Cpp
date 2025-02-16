/* FLOOR--->largest no. in array <=x
    CEIL--->smallest no. in the array>=x----->lowerbound
*/
#include<bits/stdc++.h>
using namespace std;

int floor_value(int arr[],int n,int x){
 int low=0,high=n-1;
 int ans=-1;
 while(low<=high){
    int mid=(low+high)/2;
    if(arr[mid]<=x){
        ans=arr[mid];
        low=mid+1;
    }
    else high=mid-1;
 }
 return ans;
}

int ceil_value(int arr[],int n,int x){
 int low=0,high=n-1;
 int ans=-1;
 while(low<=high){
   int mid=(low+high)/2;
   if(arr[mid]>=x){
    ans=arr[mid];
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
    for(int i=0;i<n;i++)cin>>arr[i];
    int x;
    cout<<"enter the value of X in which you find ceil and floor value : ";
    cin>>x;
  int floor=floor_value(arr,n,x);
  int ceil=ceil_value(arr,n,x);
  cout<<"floor value is : "<<floor<<endl<<"ceil value is : "<<ceil<<endl;
  
    return 0;
}