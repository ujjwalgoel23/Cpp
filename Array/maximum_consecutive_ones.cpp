#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cout<<"enter the size of array : ";
  cin>>n;
  int arr[n];
  cout<<"enter teh element in array : ";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int count=0;
  int maxi=0;
  for(int i=0;i<n;i++){
    if(arr[i]==1){
        count++;
        maxi=max(maxi , count);
    }
    else count=0;
  }
  cout<<"maximum consecutive ones is : "<<maxi;
    return 0;

}