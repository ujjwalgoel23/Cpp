#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
 long fact=1;
    cout<<"enter no:";
    cin>>num;
	do{
	    fact=fact*num;
	    num--;
	    
	} while(0<num);
	cout<<"factorial:"<<fact;
	return 0;
}
