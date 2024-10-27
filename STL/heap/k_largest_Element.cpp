#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int size;
    cout<<"enter size : ";
    cin>>size;
    int arr[size];
    cout<<"enter element: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"enter k element: ";
    cin>>k;
    priority_queue<int,vector<int>,greater<int>>minh;
    for(int i=0;i<size;i++){
     minh.push(arr[i]);
     if(minh.size()>k){
        minh.pop();
     }
    }
    cout<<"result= ";
  while(minh.size()>0){
    cout<<minh.top()<<" ";
    minh.pop();
  }
    return 0;
}





