// we required to find minimum element from array (all element must be unique)
#include<bits/stdc++.h>
using namespace std;

int min_element(int arr[],int n){
 int low=0,high=n-1;
 int ans=INT_MAX;
 while(low<=high){
    int mid=(low+high)/2;
    if(arr[low]<=arr[high]){
        ans=min(ans,arr[low]);
        break;
    }
    //left sorted
     else if(arr[low]<=arr[mid]){
       ans=min(ans,arr[low]);
       low=mid+1;
     }
    //right sorted
      else{
        ans=min(ans,arr[mid]);
        high=mid-1;
      }
}
return ans;
}

int main(){
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
   int arr[n];
   for(int i=0;i<n;i++) cin>>arr[i];
  int result=min_element(arr,n);
  cout<<"minimum element is : "<<result<<endl;
    return 0;
}