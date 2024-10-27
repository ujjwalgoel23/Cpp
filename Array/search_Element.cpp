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

    int element;
    cout<<"enter element which you want to search";
    cin>>element;

    int index=-1;
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            index=i;
            break;
        }
    }
 cout<<index;

    return 0;
}