// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int size;
//   cout<<"enter size :";
//   cin>>size;
//   int arr[size];
//   cout<<"enter element :";
//   for(int i=0;i<size;i++){
//     cin>>arr[i];
//   }

//   //first largest element
//   int ans=INT_MIN;
//   for(int i=0;i<size;i++){
//     if(ans<arr[i]){
//         ans=arr[i];
//     }
//   }

//   //2nd largest element 
//   int second=INT_MIN;
// for(int i=0;i<size;i++){
//     if(ans !=arr[i]){
//       second=  max(arr[i],second);
//     }
// }
// cout<<"second largest element is: "<<second;
//     return 0;
// }

// ------------------------------ANOTHER  METHOD------------------------------>
#include<bits/stdc++.h>
using namespace std;
int main(){
  int size;
  cout<<"enter size :";
  cin>>size;
  int arr[size];
  cout<<"enter element :";
  for(int i=0;i<size;i++){
    cin>>arr[i];
  }

  //first largest element
  int first=INT_MIN;
  for(int i=0;i<size;i++){
    if(first<arr[i]){
        first=arr[i];
    }
  }
  //second largest element 
  int second=INT_MIN;
  for(int i=0;i<size;i++){
  if(arr[i] >second && arr[i]!=first){
    second=arr[i];
  }
  }
  cout<<"second largest element is :"<<second;
  return 0;
}