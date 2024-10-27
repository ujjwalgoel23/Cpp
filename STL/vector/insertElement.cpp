#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(9);
    v.push_back(6);
    v.push_back(8);
    v.insert(v.begin()+1,300);
    for(auto it=v.begin();it<v.end();it++){
        cout<<*it<<endl;
    } 
    cout<<"--------------------------------";
    //insertion of more than one element at a same
    v.insert(v.begin()+1,4,300);
     for(auto it=v.begin();it<v.end();it++){
        cout<<*it<<endl;
    } 
    
    return 0;
}
