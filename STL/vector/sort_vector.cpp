#include<bits/stdc++.h>
using namespace std;
int main(){
     vector<int> v={10,2,-1,4,79,60};
     sort(v.begin(),v.end());
     cout<<"after sorting "<<endl;
     for(auto it=v.begin();it<v.end();it++){
        cout<<*it<<" ";
     }
    return 0;
}