#include<bits/stdc++.h>
using namespace std;
int main(){
  stack<int> s;
  s.push(9);
  s.push(4);
  s.push(3);
  s.push(6);
  
  while(!s.empty()){             //  OR while(s.size()>0){
    cout<< s.top();
    s.pop();
  }
     return 0;

}