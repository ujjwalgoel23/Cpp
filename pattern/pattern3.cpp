#include <bits/stdc++.h>
using namespace std;

void pattern(int n){
    int i,j;
    for(i=1;i<=(n);i++){
        for(j=1;j<=i;j++){
            cout<<" " << j ;
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