#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==1) return 1;
    return n*fact(n-1);
}
int main(){
    int n;
    cout<<"enter number:";
     cin>>n;
     int result=fact(n);
     cout<<"factorial : "<<result;

    return 0;
}