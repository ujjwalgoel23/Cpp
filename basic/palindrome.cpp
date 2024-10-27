#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,lastdigit,revnum=0;
    
    cout<<"enter number : ";
    cin>>n;
    int dup=n;
    while(n>0){
        lastdigit=n%10;
        revnum=(revnum*10)+lastdigit;
        n=n/10;
    }
 if(revnum==dup) {
 cout<<"palindrome";
 }  
 
 else{
   cout<<"not palindrome";
 } 



    return 0;
}