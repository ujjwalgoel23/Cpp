#include<bits/stdc++.h>
using namespace std;
int main(){
      int size;
    cout<<"enter size: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int flag=0;
    for(int i=1;i<size;i++){
        if(arr[i]>=arr[i-1]){
            flag=1;
            continue;
        }
        else break;
    }

    if(flag==1) cout<<"array is  sorted ";

    else cout<<"array is not sorted ";
    return 0;
}