#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set <string> s;
    int n;
    cout<<"enter no. of word you want to enter";
    cin>>n;
    for(int i=1;i<=n;i++){
        string str;
        cout<<"enter string";
        cin>>str;
        s.insert(str);
    }
    int q;
    cout<<"enter no. of string you want to search:";
    cin>>q;
    while(q>0){
        string str1;
        cout<<"enter string you want to search";
        cin>>str1;
        if(s.find(str1)==s.end()){
            cout<<"no"<<endl;
        }
        else{
            cout<<"yes"<<endl;
        }
        q--;
        
        }
    
    return 0;
}