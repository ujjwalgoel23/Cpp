#include<bits/stdc++.h>
using namespace std;

int find_max(int arr[],int n){
   int maxi=INT_MIN;
   for(int i=0;i<n;i++){
     maxi=max(maxi,arr[i]);
   }
   return maxi;
}

int cal_hour(int arr[],int n, int hourly){
  int total_h=0;
  for(int i=0;i<n;i++){
    total_h+=ceil((double)arr[i]/(double)hourly);
  }
  return total_h;
}

int koko_eat_banana(int arr[],int n,int hourly,int size){
    int low=1,high=size;
    while(low<=high){
        int mid=(low+high)/2;
        int total_hour=cal_hour(arr,n,mid);
        if(total_hour<=hourly) high=mid-1;
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
    for(int i=0;i<n;i++)cin>>arr[i];
    int complete_hour;
    cout<<"enter the no. of hour : ";
    cin>>complete_hour;
    int size=find_max(arr,n);
    int result=koko_eat_banana(arr,n,complete_hour,size);
    cout<<" RESULT:-->  minimum "<<result <<" banana are reqired to eat koko to finish all the piles" <<endl;
    return 0;
}
