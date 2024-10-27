#include<bits/stdc++.h>
using namespace std;
int main(){
   
    int size;
    cout<<"enter size: ";
    cin>>size;
  int arr[size];
  cout<<"enter element : ";
  for(int i=0;i<size;i++){
    cin>>arr[i];
  }
   int result= INT_MIN;  // int result=arr[0];
 for(int j=1;j<size;j++){
    if(arr[j]>result) result=arr[j];
 }
 cout<<"maximum value is " <<result;
    return 0;
}