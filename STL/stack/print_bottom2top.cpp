#include<bits/stdc++.h>
using namespace std;
int main(){
  stack<int> s;
  s.push(9);
  s.push(4);
  s.push(3);
  s.push(6);
  stack<int>temp;
  while(!s.empty()){             //  OR while(s.size()>0){
    temp.push(s.top());

    s.pop();
  }
  while(!temp.empty()){
    cout<<temp.top();
    temp.pop();
  }
     return 0;

}