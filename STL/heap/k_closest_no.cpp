#include<bits/stdc++.h>
using namespace std;
int main(){
  int size;
  cout<<"enter size: ";
  cin>>size;
  int arr[size];
  cout<<"enter element";
  for(int i=0;i<size;i++){
    cin>>arr[i];
  }
  int x;
  cout<<"enter the element to which you find closest: ";
  cin>>x;
  int k;
  cout<<"enter how many element you are finding: ";
  cin>>k;
  
  priority_queue<pair<int,int>>maxh;  // isme hm pair isliye le rhe hai taki hm first pe difference daal ske(arr[j]-x) or second pe voo element
  for(int j=0;j<size;j++){
    maxh.push({abs(arr[j]-x),arr[j]}); // abs()--> this function gives always output positive... 
   if(maxh.size()>k){
    maxh.pop();
   }
  }
  vector<int>v;
  while(maxh.size()>0){
    v.push_back(maxh.top().second);
    maxh.pop();
  }
 for(int k=0;k<v.size();k++){
    cout<<v[k]<<" ";
 }







    return 0;
}
