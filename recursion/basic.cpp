// program to print name 5 times....
#include<bits/stdc++.h>
using namespace std;

void printname(string s,int count){
    cout<<s<<endl;
    count++;
    if(count==5)  return ;  // TIME COMPLEXITY--> O(5); 
    printname(s,count);     //SPACE COMPLEXITY-->O(n);
    
}
int main(){
    string s;
    int count=0;
    cout<<"enter name: ";
    cin>>s;
    printname(s,count);
    
    return 0;

}