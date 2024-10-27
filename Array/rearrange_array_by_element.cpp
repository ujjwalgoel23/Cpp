#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"enter the element in array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

// variety 1-->if no. of positive and negative element is equal in array:
   int ans[n];
   int posindex=0;
   int negindex=1;
   for(int i=0;i<n;i++){
    if(arr[i]<0){
        ans[negindex]=arr[i];
        negindex +=2;
    }
    else{
        ans[posindex]=arr[i];
        posindex+=2;

    }
   }
 cout<<"resultant array is: ";
 for(int i=0;i<n;i++){
    cout<<ans[i]<<"  ";
 }

// variety 2 --> if no. of positive and negative element is not equal in array:



    return 0;
}