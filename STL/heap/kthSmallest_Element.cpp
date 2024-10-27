#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int size,k;
    int arr[size];
    cout<<"enter size : ";
    cin>>size;
    cout<<"enter element: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"enter k element: ";
    cin>>k;
    priority_queue<int>minh;
    for(int i=0;i<size;i++){
     minh.push(arr[i]);
     if(minh.size()>k){
        minh.pop();
     }
    }
    cout<<"result= ";
    cout<<minh.top()<<" ";
    
  
    return 0;
}