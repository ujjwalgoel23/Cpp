#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout<<"enter the size of array : ";
    cin>>size;
    int arr[size];
    cout<<"enter the element in array : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int num;
    cout<<"enter the number which you want to search :";
    cin>>num;
int flag=0;
    for(int i=0;i<size;i++){
        if(arr[i]==num){
            flag=1;
        }
    }
if(flag==0) cout<<"element is not found in the list"<<endl;
else cout<<"element is found in the array "<<endl;
    return 0;
}