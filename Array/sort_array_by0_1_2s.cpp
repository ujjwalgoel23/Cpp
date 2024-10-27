// SORT AN ARRAY OF 0'S , 1'S AND 2'S
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"enter the element in the array : ";
    for(int i=0;i<n;i++) cin>>arr[i];
    int mid=0,low=0,high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid]==1) mid++;
        else {
            swap(arr[mid],arr[high]);
            high--;
        }
    }

cout<<"resultant array: "<<"  ";
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

    return 0;
}
