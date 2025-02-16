#include<bits/stdc++.h>
using namespace std;

int rotated_array(int arr[],int n,int target){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]== target) return mid;
        //right sorted
        else if(arr[mid]<arr[high]){
           if(arr[mid]<target && arr[high]>=target) low=mid+1;
           else high=mid-1;
        }
        //left sorted
        else{
            if(arr[low]<=target && arr[mid]>target) high=mid-1;
            else low=mid+1;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"enter the element in array : ";
    for(int i=0;i<n;i++) cin>>arr[i];
    int target;
    cout<<"enter the value of target : ";
    cin>>target;
 int result=rotated_array(arr,n,target);
 if(result==-1) cout<<"element not found";
 else cout<<"element is found at index "<<result;
    return 0;
}