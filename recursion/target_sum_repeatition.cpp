#include<bits/stdc++.h>
using namespace std;
// isme hme ye btana hai ki aase kitne subset honge jinka sum 6(anything) aayega or isme hme 
// ek element ko multiple time use krnna aloowed hoga
int subsum (int arr[],int n,int index,int sum){
    if(sum==0) return 1;
    if(sum<0 ||index==n) return 0;
    return subsum(arr,n,index+1,sum) + subsum(arr,n,index,sum-arr[index]);
}

int main(){
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"enter the element in array : ";
    for(int i=0;i<n;i++)cin>>arr[i];
    int sum;
    cout<<"enter the value of Sum : ";
    cin>>sum;
    int result=subsum(arr,n,0,sum);
    cout<<"result : "<<result;
    return 0;
}