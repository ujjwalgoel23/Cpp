// USING ARRAY------>

#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout<<"enter size: ";
    cin>>size;
    int arr[size];
    cout<<"enter element: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }  

    int hash[13]={0};
    for(int j=0;j<size;j++){
        hash[arr[j]] += 1;
    }
    
    int q;
    cout<<"enter the value of q:";
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        cout<<hash[num]<<endl;
    }
    return 0;
}