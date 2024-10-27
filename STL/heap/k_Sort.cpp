#include<bits/stdc++.h>
using namespace std;
int main(){
   int size;
    cout<<"enter the size of array";
    cin>>size;
    int arr[size];
    cout<<"enter element:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"enter the value of k";
    cin>>k;
     priority_queue<int,vector<int>,greater<int>>minh;
     vector<int>v;
    for(int j=0;j<size;j++){
       minh.push(arr[j]);
       if(minh.size()>k){
        v.push_back(minh.top());
        minh.pop();
       }
    }
    while(!minh.empty()){
        v.push_back(minh.top());
        minh.pop(); 
    }

   for(auto it:v){
    cout<<it;
   }
    return 0;
}