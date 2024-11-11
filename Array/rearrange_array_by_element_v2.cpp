// this is same as previous ques. but the difference is only that : in this ques no. of positive and negative element  are not same 
// variety 2 of prvious question
#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<int>v;
   int n;
   cout<<"enter no. of element you want to insert : ";
   cin>>n;
   cout<<"enter element : " ;
   for(int i=0;i<n;i++){
    int k;
    cin>>k;
    v.push_back(k);
   }
 
  vector<int>pos,neg;
  
  for(int i=0;i<n;i++){
  if(v[i]>0) pos.push_back(v[i]);
  else neg.push_back(v[i]);
  }
  if( pos.size()>neg.size()){
  for(int i=0;i<neg.size();i++){  
    v[2*i]=pos[i];
    v[2*i+1]=neg[i];
  }
  int index=neg.size()*2;
  for(int i=neg.size();i<pos.size();i++){
    v[index]=pos[i];
    index++;
  }
  }
else{
    for(int i=0;i<pos.size();i++){
        v[2*i]=pos[i];
        v[2*i+1]=neg[i];
    }
    int index=pos.size()*2;
    for(int i=pos.size();i<neg.size();i++){
        v[index]=neg[i];
        index++;
    }
}
//hey
cout<<"resultant matrix is : ";
for(int i=0;i<n;i++){
    cout<<v[i]<<"  ";
}
    return 0;
}