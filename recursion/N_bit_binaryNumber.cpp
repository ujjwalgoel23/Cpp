#include<bits/stdc++.h>
using namespace std;

void find(int n,vector<string>&ans,string &temp,int zero,int one){
    //base condition
    if(temp.size()==n){
        ans.push_back(temp);
        return ;
    }
    // add zero
    if(zero<one){
        temp.push_back('0');
        find(n,ans,temp,zero+1,one);
        temp.pop_back();
    }
    //add zero
    temp.push_back('1');
    find(n,ans,temp,zero,one+1);
    temp.pop_back();

}

int main(){
    int n;
    cout<<"enter teh size of array : ";
    cin>>n;
    string temp="";
    vector<string>ans ; 
    find(n,ans,temp,0,0);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}