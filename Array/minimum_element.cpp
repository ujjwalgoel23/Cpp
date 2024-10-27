#include<bits/stdc++.h>
using namespace std;
int main(){
    int result= INT_MAX; // isse result ke andar 0th index ki value poch jyegii .. it means it stores first value of the array..
    //hmne 1st elemnt ko maximum maang leyaa or phir uske baad compare krke puraa array me check kr leyaa...
    int size;
    cout<<"enter size: ";
    cin>>size;
  int arr[size];
  cout<<"enter element : ";
  for(int i=0;i<size;i++){
    cin>>arr[i];
  }
 for(int j=1;j<size;j++){
    if(arr[j]<result) result=arr[j];
 }
 cout<<"minimum value is " <<result;
    return 0;
}