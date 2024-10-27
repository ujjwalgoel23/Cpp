#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    string str2;
    stack<char>s;
    cout<<"enter string:";
    cin>>str;
    for(auto it:str){
        s.push(it);
    }
    
    while(!s.empty()){
        str2=str2+s.top();
        s.pop();
    }
    cout<<str2;
    return 0;
}