#include <bits/stdc++.h>
using namespace std;

void pattern (int n){
    int i,j;
     
   for(i=0;i<=n-1;i++){
    //space
    for(j=0;j<=n-i-1;j++){
        cout<<" ";
    }
    //numbers
    char ch='A';
    int breakpoint=(2*i+1)/2;
    for(j=0;j<=2*i+1;j++){
        cout<<ch;
        if(j<=breakpoint){
            ch++;
        }
        else{
            ch--;
        }
    }

    
    //space
    for(j=0;j<=n-i-1;j++){
        cout<<" ";
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