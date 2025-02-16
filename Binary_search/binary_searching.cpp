#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[],int n,int search_ele){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==search_ele)     return mid;
        else if(arr[mid]>search_ele) high=mid-1;
        else low=mid+1;
    }
    return -1;;
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
    int res=binary_search(arr,n,search_ele);
    if(res==-1) cout<<"element is not found";
    else cout<<"element is found at index "<<res<<endl;

    return 0;

}