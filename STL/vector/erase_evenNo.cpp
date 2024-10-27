#include<bits/stdc++.h>
using namespace std;
int main(){
    
    vector<int> vec={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    cout<<"vector before deletion"<<endl;
    for(auto it=vec.begin();it<vec.end();it++){
        cout<<*it<<" ";
    }
    auto it=vec.begin();// used to access the element of vector
    while(it!=vec.end()){
      if((*it)%2==0){
        vec.erase(it);
      }
      else{
        it++;
      }
    }
    cout<<"\nvector after deletion"<<endl;
    for(auto it=vec.begin();it<vec.end();it++){
        cout<<*it<<" ";
    }
    return 0;
}