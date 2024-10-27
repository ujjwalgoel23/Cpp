#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>s;
    stack<int>temp;
    s.push(9);
    s.push(1);
    s.push(5);
    s.push(4);
    s.push(8);
    while(!s.empty()){
        temp.push(s.top());
        s.pop();

    }
    cout<<"after reversing"<<endl;
    while(!temp.empty()){
        cout<<temp.top();
        temp.pop();
        
    }
    return 0;
}
