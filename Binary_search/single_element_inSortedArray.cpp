// saare element 2baar aa rhe honge , bs ek element ek baar aa rha hoga or hme vhi find krna hai
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of array ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++){
      if(i==0 && arr[0]!=arr[1]) {
        cout<<arr[0]<<" is the single element"<<endl;
        break;
      }
      else if(i==(n-1) && arr[n-1]!=arr[n-2]){
        cout<<arr[n-1]<<" is the single element"<<endl;
        break;
      }
      else{
        if(arr[i]!=arr[i+1] && arr[i]!=arr[i-1]){
            cout<<arr[i]<<" is the single element";
            break;
        }
      }
    }
    return 0;
}




//                   //OPTIMAL APPROACH---> using binary_search
// #include<bits/stdc++.h>
// using namespace std;

// int find_single_element(int arr[],int n){
//     if(n==1) return arr[0];
//     else if(arr[0]!=arr[1]) return arr[0];
//     else if(arr[n-1]!=arr[n-2]) return arr[n-1];
//     int low=1,high=n-2;
//     while(low<=high){
//         int mid=(low+high)/2;
//         if(arr[mid]!=arr[mid+1] && arr[mid]!=arr[mid-1]) return arr[mid];
//         else if((mid%2==1 && arr[mid-1]==arr[mid]) || (mid%2==0 && arr[mid]==arr[mid+1])) low=mid+1;
//         else high=mid-1;
//     }
//     return -1;
// }

// int main(){
//   int n;
//   cout<<"enter the size of array : ";
//   cin>>n;
//   int arr[n];
//   cout<<"enter the element in array :";
//   for(int i=0;i<n;i++)cin>>arr[i];
//   int result=find_single_element(arr, n);
//   if(result==-1) cout<<"single element is not present"<<endl;
//   else cout<<result<<" is the single element in array "<<endl;;
//     return 0;
// }    

