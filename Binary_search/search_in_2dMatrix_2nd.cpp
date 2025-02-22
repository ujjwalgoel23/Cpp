#include<bits/stdc++.h>
using namespace std;

bool searching(int arr[][100],int n,int m,int target){
    int row=0,col=m-1;
    while(row<n && col>=0){
   if(arr[row][col]==target) return true;
   else if(arr[row][col]<target) row++;
   else col--;
    }
    return false;
}

int main(){
   int n,m;
   cout<<"enter rows and columns : ";
   cin>>n>>m;
   int arr[100][100];
   cout<<"enter the element in matrix : ";
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
   }
   int target;
   cout<<"enter the element which you want to search : ";
   cin>>target;


   int result=searching(arr,n,m,target);
   if(result==true) cout<<"element is Found ";
   else cout<<"element is not found";
   return 0;
}