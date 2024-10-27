#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(99);
    v.push_back(97);
    v.push_back(91);
    for(auto it=v.begin();it<v.end();it++){
        cout<<*it<<endl;
    }

    v.erase(v.begin()+1);
    //after deleting
    for(auto it=v.begin();it<v.end();it++){
        cout<<*it<<endl;
    }




   // deleting more than 1 element at a time
    // v.erase(v.begin()+1, v.begin()+3);
    // for(auto it=v.begin();it<v.end();it++){
    //     cout<<*it<<endl;
    // }
        return 0;
}