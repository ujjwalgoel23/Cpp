#include<bits/stdc++.h>
using namespace std;

void reverse(int i, int arr[],int size){
    if(i>=size/2) return;
    swap(arr[i],arr[size-i-1]);
     reverse(i+1,arr,size);
}
int main(){
    int size;
    cout<<"enter size: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int i;
    reverse(0,arr,size);
    for(int i=0;i<size;i++){
    cout<<arr[i]<<"  ";
    
    }

    return 0;
}