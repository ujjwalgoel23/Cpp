 #include<bits/stdc++.h>
 using namespace std;

int peak_element(int arr[],int n){
    if(n==1) return arr[0] ;
    if(arr[0]>arr[1]) return arr[0];
    if(arr[n-1]>arr[n-2]) return arr[n-1];
    int low=1,high=n-2;
    while(low<=high){
        int mid=(low+high)/2;
        if((arr[mid]>arr[mid-1]) && (arr[mid]>arr[mid+1])) return arr[mid];
        else if(arr[low]<arr[mid]) low=mid+1;
        else high=mid-1;
    }
    return -1;
}

 int main(){
  int n;
  cout<<"enter the size of array : ";
  cin>>n;
  int arr[n];
  cout<<"enter the element in array : ";
  for(int i=0;i<n;i++)cin>>arr[i];
 int result=peak_element(arr,n);
 if(result==-1)cout<<"peak element is not found";
 else cout<<"peak element is : "<<result;
    return 0;
 }