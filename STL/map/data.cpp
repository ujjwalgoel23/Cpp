#include<bits/stdc++.h>
using namespace std;
int main(){
    int phone,n;
      string name ;
    map<string,int> mpp;
    cout<<"enter no. of student:";
    cin>>n;
    for(int i=1;i<=n;i++){
    cin>>name>>phone;
    mpp.insert({name,phone});
     
    }
   cout<<endl<<"size:"<< mpp.size()<<endl;
    for(auto it:mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    
    return 0;
}