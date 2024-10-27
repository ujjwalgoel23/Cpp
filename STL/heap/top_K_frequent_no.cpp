#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout<<"enter size:";
    cin>>size;
    int arr[size];
    cout<<"enter element: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"enter the value of k: ";
    cin>>k;
    unordered_map<int,int>mpp; 
    for(int j=0;j<size;j++){
        mpp.insert({arr[j],mpp[arr[j]]++});
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minh;
    for(auto x=mpp.begin() ; x!=mpp.end();x++){
        minh.push({x->second,x->first}); //jb pair use krte hai jb "." ka istmaal krte haii or jb iterator k use ekrte hai toh "->" istmaal krte hai..
        if(minh.size()>k){
            minh.pop();
        }
    }    
    while(minh.size()>0){
        cout<<minh.top().second;
        minh.pop();
    }
   return 0;
}
