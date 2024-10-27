// THIS CODE IS ALSO A OPTIMAL CODE       [ optimal approach]
#include<bits/stdc++.h>
using namespace std;
int main(){
  // input a rray
  int size;
  cout<<"enter size: ";
  cin>>size;
  
  int arr[size];
  cout<<"enter element in array : ";
  for(int i=0;i<size-1;i++){
    cin>>arr[i];
  }

//  sum of all element that is present in array 
int sum=0;
for(int i=0;i<size-1;i++){
    sum+=arr[i];
}

// sum of n numbers
int overall=size*(size+1)/2;

// missing number
int ans= overall-sum;
cout<<"missing number is: "<<ans;

 return 0;
}

//---------------- ANOTHER METHOD-----------------------------
// this code has better time and space complexity  [better approach] 
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int n;
//   cout<<"enter size of array : ";
//   cin>>n;

//   int arr[n];
//   cout<<"enter the element in the array : ";
//   for(int i=0;i<n;i++){
//     cin>>arr[i];
//   }
  
//   int hash[n+1]={0};
//   for(int i=0;i<n-1;i++){
//     hash[arr[i]]=1;
//   }
//   for(int i=1;i<n;i++){
//     if(hash[i]==0) cout<<i<<" element is not found";
//   }
//   return 0;
// }

