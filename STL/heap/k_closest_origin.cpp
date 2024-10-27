#include<bits/stdc++.h>
using namespace std;
int main(){
  int size;
  cout<<"enter size:";
  cin>>size;
  pair<int,int> arr[size];
  cout<<"enter element";

  for(  int i=0;i<size;i++){
    cin>>arr[i].first>>arr[i].second;
  }
  int k;
  cout<<"enter k element: ";
  cin>>k;
  priority_queue<pair<int,pair<int,int>>>maxh;
  for(int j=0;j<size;j++){
    int a=arr[j].first*arr[j].first;
    int b=arr[j].second*arr[j].second;
    maxh.push({a+b,{ arr[j].first ,arr[j].second}});
    if(maxh.size()>k){
        maxh.pop();
    }
  }
  
while(maxh.size()>0){
    pair<int,int>n=maxh.top().second;
    cout<<n.first<<" "<<n.second<<endl ;
    maxh.pop();
}
    return 0;
}