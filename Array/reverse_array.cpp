// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//  int size;
//     cout<<"enter size: ";
//     cin>>size;
//     int arr[size];
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }
    
//     for(int j=0;j<(size-1)/2;j++){
//         int temp=arr[size-1-j];
//         arr[size-1-j]=arr[j];
//         arr[j]=temp;
//     }
// cout<<"the reverse of array is : ";
// for(int k=0;k<size;k++){
//         cout<<arr[k];
//     }
//  return 0;
// }


// ----------------------------------------------------ANOTHER METHOD-------------------------------------------------------->
#include<bits/stdc++.h>
using namespace std;
int main(){
 int size;
    cout<<"enter size: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
  int start=0,end=size-1;
     while(start<end){
    swap(arr[start],arr[end]);
    start++;
    end--;
     }

    cout<<"the reverse of array is : ";
   for(int k=0;k<size;k++){
         cout<<arr[k];
       }
 
 return 0;
}