#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    } 
    if(count==2){
        cout<<"prime number";
    }
    else {
        cout<<"not a prime number";
    }


    // TO REDUCE TIME COMPLEXITY ----->
    // for(int i=1;i*i<=n;i++){
    //    if(n%i==0) {
    //     count++;
    //       if((n/i) != i) count++;
    // }
    // }
    // if(count==2)  cout<<"prime number";
     
    //  else  cout<<"not a prime number";

    return 0;
}