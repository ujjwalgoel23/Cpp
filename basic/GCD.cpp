#include<bits/stdc++.h>
using namespace std;
int main(){
  int num1,num2;
  cout<<"enter two number:";
  cin>>num1>>num2;
  vector<int>v;
int n=min(num1,num2);
for(int i=1;i<=n;i++){
    if(num1%i==0 && num2%i==0){
        v.push_back(i); 
    }
}
int result=*max_element(v.begin(),v.end());
cout<<"GCD:" <<result;
    return 0;
} 