#include<bits/stdc++.h>
using namespace std;

int insert(stack<int>&s1,int k){
    if(s1.empty()){
        s1.push(k);
        return 0;
    }
    int temp=s1.top();
    s1.pop();
    insert(s1,k);
    s1.push(temp);
    return 0;
}

int reverse_stack(stack<int>&s1){
  if(s1.empty()) return 0;
  int temp=s1.top();
  s1.pop();
  reverse_stack(s1);
  insert(s1,temp);
  return 0;
}

int main(){
    stack<int>s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    reverse_stack(s1);
    while(s1.size()>0){
        cout<<s1.top();
        s1.pop();
    }
    cout<<endl;
    return 0;
}