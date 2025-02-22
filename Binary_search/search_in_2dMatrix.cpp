#include<bits/stdc++.h>
using namespace std;

bool searching(int arr[][100],int n,int m,int target){
 int low=0,high=n*m-1;
 while(low<=high){
    int mid=(low+high)/2;
    int col= mid%m ;
    int row=mid/m;
    if(arr[row][col]==target) return true;
    else if(arr[row][col]<target) low=mid+1;
    else high=mid-1;
 }
 return false;
}

int main(){
    int n,m;
    cout<<"enter row and column : ";
    cin>>n>>m;
    int arr[100][100];
    cout<<"enter the element in array : ";
    for(int i=0;i<n;i++ ){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int target;
    cout<<"enter the element which you want to search : ";
    cin>>target;
    bool result=searching(arr,n,m,target);
    if(result==true) cout<<"element is found ";
    else cout<<"element is not found ";
    return 0;
}