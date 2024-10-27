#include<bits/stdc++.h>
using namespace std;

void printnumber(int n,int i){
 if(i==n+1) return ;
 cout<<i<<endl;
 i++;
 printnumber(n,i);
}
int main(){
 int n,i=1;
 cout<<"Enter Number: ";
 cin>>n;
 printnumber(n,i);
    return 0;
}

