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
  int j=-1;
  for(int i=0;i<size;i++){
  if(arr[i]==0){
    j=i;
    break;
  }
  }
  for(int i=j+1;i<size;i++){
    if(arr[i]!=0){
        swap(arr[i],arr[j]);
        j++;
    }
  }
  
  cout<<"resultant array is: ";
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
    return 0;
}