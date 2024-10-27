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
   // no. of element which is rotate
  cout<<"enter the no. of element which you want to rotate ";
  int d;
  cin>>d;

// storing the element in the temp array

d=d%n; // decides no. of rotation
int temp[d];
for(int i=0;i<d;i++){
    temp[i]=arr[i];
}

// push the last element of arrayin front
for(int i=d;i<n;i++){
    arr[i-d]=arr[i];
}

// push_back  the temp[] element into array
int j=0;
for(int i=n-d;i<n;i++){
    arr[i]=temp[j];
    j++;
}

// resultant array is: 
cout<<"array after Rotation is  : ";
   for(int i=0;i<n;i++){
    cout<<arr[i];
   }



    return 0;

}