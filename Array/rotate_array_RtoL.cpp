//ROTATE ARRAY BY 1
#include<bits/stdc++.h>
using namespace std;
int main(){
  int size;
  cout<<"enter size: ";
  cin>>size;
  cout<<"enter element : ";
  int arr[size];
  for(int i=0;i<size;i++){
    cin>>arr[i];
  }
 //rotating
 int temp=arr[size-1];
 for(int i=size-1;i>=0;i--){
    arr[i]=arr[i-1];
 }
 arr[0]=temp;
 for(int i=0;i<size;i++){
    cout<<arr[i];
  }



return 0;
}
