#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"enter the element in array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 // maximum subarray sum-->
 // using kadane's algorithm
 
    int maxi=INT_MIN;
    int sum=0;
    int ans_start=-1;
    int ans_end=-1;
    int start;
    for(int i=0;i<n;i++){
        if(sum==0){
            start=i;
        }
        sum += arr[i];
        if(sum>maxi){
            maxi=sum;
            ans_start=start,ans_end=i;
        }
        if(sum<0){
            sum=0;
        }
    }
    cout<<"index of subarray thats sum is greatest is : "<<endl;
    cout<<"starting : "<<ans_start<<"     "<<"ending : "<<ans_end<<endl;
    cout<<"sum is : "<<maxi;
    return 0;
}