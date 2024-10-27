#include<bits/stdc++.h>
using namespace std;
int main(){
    multiset<string>ms;
    ms.insert("abc");
    ms.insert("xyz");
    ms.insert("pqr");
    ms.insert("abc");
    ms.insert("abc");
    cout<<"using itertor to erase the value"<<endl;
  
     auto it=ms.find("abc");  
     if(it!=ms.end()){
        ms.erase(it); 
         //it erases only first occurence of the element
         
    } 
    for(auto it:ms){
        cout<<it<<" ";
    }
  // cout<<"using erase function to erase the value:"<<endl;
  //     ms.erase("abc");
  // for(auto it:ms){
  //         cout<<it<<" ";
  //     }
    return 0;
}