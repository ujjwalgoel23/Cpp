#include<bits/stdc++.h>
 using namespace std;
 int main(){
    int arr[16]={1,2,3,4,3,3,3,3,3,1,6,11,11,11,11,10};
   map<int,int>mpp;
   for(int i=0;i<16;i++){
   mpp[arr[i]]++;
   }

priority_queue<pair<int,int>>maxh;

for(auto it:mpp){
    maxh.push({it.second,it.first}); 
}

cout<<"Element:"<<maxh.top().second<<endl<<"Freq:"<<maxh.top().first;
    return 0;
 }
 