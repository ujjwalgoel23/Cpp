#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int count=0;
	cout<<"enter number: ";
	cin>>n;
	while(n>0){
		
		count++;
		n=n/10;
	}
	cout<<"no. of digits :"<<count;
	return 0;
}
// ANOTHER WAY  TO SOLVE THIS QUESTION----->
// int count(int n){
// 	int cnt =(int)(log10(n)+1);       we can also solve the problem using calculator by writing log10(n)+1 on calculator 
//          return cnt;
// }