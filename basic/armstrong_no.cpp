#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  int sum=0;
  int lastdigit;
  cout<<"enter number : ";
  cin>>n;
  int dup=n;
  while(n>0){
   lastdigit= n%10;
   sum=sum+(lastdigit*lastdigit*lastdigit);
   n=n/10;

  }
 if(sum==dup){
    cout<<"armstrong  number";
 }
 else {
    cout<<"not armstrong number";
 }


    return 0;
}