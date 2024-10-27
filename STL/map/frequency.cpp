// this ques. is related to hashing till now i'm not learn it after learn hashing i will try to solve it again with proper understanding

#include<bits/stdc++.h>
using namespace std; 
int main(){
    map<string,int> m;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        string s;
        cin>>s;
        //m[s]=m[s]+1;
        m[s]++;
    }
    for(auto it:m){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
} 