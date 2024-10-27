#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(4);
    v.push_back(7);
    v.push_back(9);
    
   
    //  for(vector<int>::iterator it=v.begin();it<v.end();it++){
    //     cout<<*(it)<<endl;}

    //shortcut for printing
     for(auto it=v.begin();it<=v.end();it++){
        cout<<*(it)<<endl;
}
    return 0;
     

}