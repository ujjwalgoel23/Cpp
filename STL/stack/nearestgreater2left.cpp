#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    stack<int>s;
    int arr[5]={1,7,4,9,3};
    for(int i=0;i<=4;i++){
        if(s.size()==0){
            v.push_back(-1);
        }
        else if(s.size()>0 && s.top()>arr[i]){
         v.push_back(s.top());
        }
        else if( s.size()>0 && s.top()<=arr[i]){
            while(s.size()>0 && s.top()<=arr[i]){
                s.pop();
            }
            if(s.size()==0){
                v.push_back(-1);
            }
           else{
            v.push_back(s.top());
           }
        }
        s.push(arr[i]);
    }
    
    for(auto it:v){
    cout<<it<<" ";
}    return 0;
}