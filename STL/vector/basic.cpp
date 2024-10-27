#include<bits/stdc++.h>
using namespace std;
int main(){
    
    vector<int> v(5,6);    //declaration of vector
    v.push_back(8);         //inbuilt function
    cout<<v[5];            //accessing the element of vector
    cout<<endl<<v.at(4);   // another method to access the lement of vector
    return 0;
}