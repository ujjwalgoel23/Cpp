#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>s;
    int n;
    cout<<"enter no. of element you want to insert :";
    cin>>n;
    cout<<"enter element:";
        for(int i=0;i<n;i++){
        int x;
        
        cin>>x;
        s.push(x);
    }
    vector<int>v;
    while(!s.empty()){
        v.push_back(s.top());
        s.pop();
    }
    reverse(v.begin(),v.end());
    if(n%2==0){
    v.erase(v.begin()+(n/2)-1);
    }
    else{
        v.erase(v.begin()+(n/2));
    }
    for(int i=0;i<v.size();i++){
        s.push(v[i]);
        
    }
    cout<<" stack after deleting mid value:";
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}