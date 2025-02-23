#include<bits/stdc++.h>
using namespace std;

void subset_sum(int arr[],int n,int index,int sum){
 //base condition
 if(index==n){
    cout<<sum<<endl;
    return ;
 }
    // no
subset_sum(arr,n,index+1,sum);
 //yes
subset_sum(arr,n,index+1,sum+arr[index]);

}

int main(){
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"enter the lement in array : ";
    for(int i=0;i<n;i++)cin>>arr[i];
    cout<<"result : "<<endl;
    subset_sum(arr,n,0,0);
    
    return 0;
}