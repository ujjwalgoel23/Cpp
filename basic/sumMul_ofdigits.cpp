#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,lastdigit;
    int sum=0;
    int product=1;
    cout<<"enter number:";
    cin>>n;
    while(n>0){
        lastdigit= n % 10;
        sum=sum+lastdigit;
        product=product*lastdigit;
        n=n/10;
    }
    cout<<"sum:"<<sum<<" "<<"multipy:"<<product<<endl;
    return 0;
}