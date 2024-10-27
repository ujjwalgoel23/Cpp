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
    // optimal code for majority element-->
    int count=0,element;
    for(int i=0;i<n;i++){
     if(count==0){
        count++;
        element=arr[i];
     }
     else if(arr[i]==element) count++;
     else count--;
    }
    int overall_freq=0;
    for(int i=0;i<n;i++){
        if(arr[i]==element) overall_freq++;
    }
    if(overall_freq>n/2) cout<<"majority element is : "<<element;
    else cout<<"-1";
    return 0;
}