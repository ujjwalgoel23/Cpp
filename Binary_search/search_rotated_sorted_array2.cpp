#include<bits/stdc++.h>
using namespace std;
// this ques. also contain dupliacte element
bool rotated_array(int arr[],int n,int target){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]== target) return true;
        if(arr[mid]==arr[low] && arr[mid]==arr[high]){
            high--;
            low++;
            continue;
        }
        //right sorted
        else if(arr[mid]<=arr[high]){
           if(arr[mid]<=target && arr[high]>=target) low=mid+1;
           else high=mid-1;
        }
        //left sorted
        else{
            if(arr[low]<=target && arr[mid]>=target) high=mid-1;
            else low=mid+1;
        }
    }
    return false;
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
 bool result=rotated_array(arr,n,target);
 if(result==false) cout<<"element not found"<<endl;
 else cout<<"element is found "<<endl;
    return 0;
}