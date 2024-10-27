#include<bits/stdc++.h>
using namespace std;
int main(){
  int size;
  cout<<"enter size:";
  cin>>size;
  int arr[size];
  cout<<"enter element";

  for(  int i=0;i<size;i++){
    cin>>arr[i];
  }
  priority_queue<int,vector<int>,greater<int>>minh;
  for(int j=0;j<size;j++){
    minh.push(arr[j]);
  }
 int cost=0;
 while(minh.size()>=2){
    int first=minh.top();
    minh.pop(); 
    int second=minh.top();
    minh.pop();
    minh.push(first+second);
    cost=cost+first+second;
 }
 cout<<"minimum cost is:"<<cost;

    return 0;
}