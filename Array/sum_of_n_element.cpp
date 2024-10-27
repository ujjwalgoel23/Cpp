#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout<<"entersize : "<<endl;
    cin>>size;
    int arr[size];
    cout<<"enter element"<<endl;
 for(int i=0;i<size;i++){
    cin>>arr[i];
 }
 int sum=0;
 for(int j=0;j<size;j++){
    sum+=arr[j];
 }
 cout<<" sum of the array is: "<<sum;

return 0;
}