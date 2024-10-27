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
    unordered_map<int,int>mpp;
    for( int j=0;j<size;j++){
       mpp.insert({arr[j],mpp[arr[j]]++});
    }
    
    priority_queue<pair<int,int>>maxh;
   
    for(auto it=mpp.begin();it!=mpp.end();it++){
        maxh.push({it->second,it->first});
    }
    while(maxh.size()>0){
    for(int x=0;x<maxh.top().first;x++){
        cout<<maxh.top().second<<" ";    

    }
    maxh.pop();
    }


    return 0;
}