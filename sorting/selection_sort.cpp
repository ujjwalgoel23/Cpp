#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int n){
   for(int i=0;i<(n-1);i++){
     int min=i;
      for( int j=i+1;j<n;j++){
         if(arr[min]>arr[j])  min=j;
      }
      swap(arr[i],arr[min]);
   }
}

int main(){
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection_sort(arr,n);
    cout<<"array after sorting is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}