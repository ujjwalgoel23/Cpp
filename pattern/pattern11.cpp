#include <bits/stdc++.h>
 using namespace std;
 void pattern(int n){
    int i,j;
    int start=1;
    for(i=0;i<=(n-1);i++){
        
        if(i%2 == 0){
            start=1;
        }
        else{
            start=0;
        }
        for(j=0;j<=i;j++){
            cout<<start;
            start = 1-start;
        }
        cout<<endl;
    }
 }
 int main(){
    int n;
    cin>>n;
    pattern(n);
    return 0;
 }