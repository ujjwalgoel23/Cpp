#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[],int low,int high,int search_ele){
   if(low>high) return -1;
   int  mid=(low+high)/2;
   if(arr[mid]==search_ele) return mid;
   else if(arr[mid]<search_ele) return binary_search(arr,mid+1,high,search_ele);
   else  binary_search(arr,low,mid-1,search_ele);

}
int main(){
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int search_ele;
    cout<<"enter the element which you want to search :";
    cin>>search_ele;
    int res=binary_search(arr,0,n-1,search_ele);
    if(res==-1) cout<<"element is not found";
    else cout<<"element is found at index "<<res<<endl;

    return 0;

}