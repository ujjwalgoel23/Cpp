#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v(2,8);
    v.push_back(7);

    //another method to access the element of vector

    // auto xyz =v.begin();    
    // cout<<*(xyz)<<endl;
    // xyz++;
    // cout<<*(xyz)<<endl;
    // xyz++;
    // cout<<*(xyz)<<endl<<endl;


//     v.end()---> returns garbage value because this return the address of next last element
// vector<int>::iterator xyz =v.end();
     
//     cout<<*(xyz)<<endl;

//     v.rend()--->
    // auto xyz =v.rend();    
    // cout<<*(xyz)<<endl;
  //   v.rbegin()------>
  auto it=v.rbegin();
  cout<<*it<<endl;
  it++;
  cout<<*it<<endl;
  //   return 0;
}