#include<bits/stdc++.h>
using namespace std;

void tower(int n,int source,int helper ,int desig){
    if(n==1){
        cout<<"move disk"<<n<<" from "<<source<<"to "<<desig<<endl;
        return ;
    }
 tower(n-1,source,desig,helper);
 cout<<"moving disk "<<n<<" from "<<source<<"to "<<desig<<endl;
 tower(n-1,helper,source,desig);
}  

int main(){
int n;

cout<<"enter number of disks: ";
cin>>n;
tower(n,1,2,3);;
return 0;
}

























































