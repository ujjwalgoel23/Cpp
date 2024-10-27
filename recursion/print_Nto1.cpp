#include<bits/stdc++.h>
using namespace std;

void printnumber(int n){
    if(n==0)return ;
    if(n>0) cout<<n<<endl;
    n--;
    printnumber(n);
}
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    printnumber(n);
    return 0;
}