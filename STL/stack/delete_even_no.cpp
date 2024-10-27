#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>s;
    s.push(9);
    s.push(8);
    s.push(1);
    s.push(2);
    s.push(5);
    stack<int> temp;
    while(!s.empty()){
        temp.push(s.top());
        s.pop();
    }
    while(!temp.empty()){
        if(temp.top() % 2==0){
          temp.pop();
        }
        else{
            s.push(temp.top());
            temp.pop();
        }
    }
    cout<<"after deleting all even no."<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}