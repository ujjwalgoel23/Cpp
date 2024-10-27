#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout<<"enter the size of array : ";
    cin>>size;
    int arr[size];
    cout<<"enter the element in array : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    //rotating the array--->
    int temp=arr[0];
    for(int i=0;i<size-1;i++){
       arr[i]=arr[i+1];
    }
    arr[size-1]=temp;

    // printing the array-->
    cout<<"the array after rotating is : ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"  ";
    }
    return 0;
}