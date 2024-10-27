#include <bits/stdc++.h>
using namespace std;
void pattern(int n){
    int i,j;
    int space = 2*(n-1);
    for(i=1;i<=n;i++)
    {
      //numbers
      
      for(j=1;j<=i;j++ ){
        cout<<j;
      }
      //space
     for(j=1;j<=space;j++){
        cout<<" ";
     }
     //numbers
     for(j=i;j>=1;j-- ){
        cout<<j;
      
}
    cout<<endl;
    space -=2;
}}

int main(){
    int n;
    cin>>n;
    pattern(n);
    return 0;
}