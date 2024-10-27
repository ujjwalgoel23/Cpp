#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v1={1,2,3,4,5};
    vector<int> v2={11,12,13,14,15};
    v1.swap(v2);
    for(auto it=v1.begin();it<v1.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto n=v2.begin();n<v2.end();n++){
        cout<<*n<<" ";
    }
    return 0;
}