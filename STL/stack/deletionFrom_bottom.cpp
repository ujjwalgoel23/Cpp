#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>s;
    s.push(9);
    s.push(5);
    s.push(8);
    s.push(2);
    stack<int>temp;
    while(!s.empty()){
        temp.push(s.top());
        s.pop();
    }
    temp.pop();
     while(!temp.empty()){
        s.push(temp.top());
        temp.pop();
    }
    while(!s.empty()){             //  OR while(s.size()>0){
    cout<< s.top();
    s.pop();
  }
    return 0;
}