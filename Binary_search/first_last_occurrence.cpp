                      // BRUTE FORCE-->
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"enter the element in array : ";
    for(int i=0;i<n;i++) cin>>arr[i];
    int target;
    cout<<"enter the vvalue of target";
    cin>>target;
    int first=-1,last=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            if(first==-1) first=i;
            last=i;
        }
    }
    cout<< "starting index : "<<first<<endl<<"last index : "<<last<<endl;
    return 0;
}   
    
//                 // BETTER APPROACH--->
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of array ";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)cin>>arr[i];
//     int x;
//     cout<<"enter the value of x : ";
//     cin>>x;
//     int lower=lower_bound( arr, arr+n, x)-arr;
//     int upper=upper_bound( arr, arr+n, x)-arr;
//     if(lower==n && arr[lower]!=x) cout<<"element is not found in array";
//     else cout<<"element is found"<<endl<<"starting index : "<<lower<<endl<<"ending index : "<<upper-1<<endl;
//     return 0;
// }


//                      //OPTIMAL APPROACH--->
// #include<bits/stdc++.h>
// using namespace std;

// int start_ind(int arr[],int n,int x){
//  int low=0,high=n-1;
// int first=-1;
// while(low<=high){
//     int mid=(low+high)/2;
//     if(arr[mid]==x){
//         first=mid;
//         high=mid-1;
//     }
//     else if(arr[mid]>x) high=mid-1;
//     else low=mid+1;
// }
// return first;
// }

// int end_ind(int arr[],int n,int x){
//  int low=0,high=n-1;
//  int last=-1;
//  while(low<=high){
//     int mid=(low+high)/2;
//     if(arr[mid]==x){
//         last=mid;
//         low=mid+1;
//     }
//     else if( arr[mid]<x) high=mid-1;
//     else low=mid+1;
//  }
//  return last;
// }

// int main(){
//     int n;
//     cout<<"enter the size of array :";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)cin>>arr[i];
//     int x;
//     cout<<"enter the element in which we find first & last occurrence : ";
//     cin>>x;
//     int first=start_ind(arr,n,x);
//     int last=end_ind(arr,n,x);
//     if(first==-1) cout<<"element is not present in array ";
//     else cout<<"element is found "<<endl<<"starting index : "<<first <<endl<<"ending index : "<<last<<endl;
//     return 0;
// }