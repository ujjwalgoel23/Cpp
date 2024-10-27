// print subsets/powerset/all subsequences
#include<bits/stdc++.h>
using namespace std;

void subset(string input,string output){
 if(input.size()==0){
 cout<<output<<endl;
 return;
 }
string output1=output;
string output2=output;
output2.push_back(input[0]);
input.erase(input.begin()+0);
subset(input,output1);
subset(input,output2);
return;

}
 

int main(){
    string input;
    cout<<"enter string : ";
    cin>>input;
    string output="";
    subset(input,output);
    return 0;
}