#include <bits/stdc++.h>
using namespace std;

void pattern(int n){
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=(n-i+1);j++){
            cout<<" * ";
        }
        cout<<endl;
    }
} 
int main(){
    int n;
    cin>> n;
    pattern(n);
        return 0;
}