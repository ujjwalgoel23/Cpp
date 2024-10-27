#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    int lastdigit=0;
    int revnum=0;
 while(n>0){
 lastdigit=n%10;
 revnum=(revnum*10)+lastdigit;
 n=n/10;
 }
 cout<<revnum;
    return 0;
}