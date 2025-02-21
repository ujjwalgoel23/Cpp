#include<bits/stdc++.h>
using namespace std;

int func(int arr[],int n,int mid){
    int stud=1,pagestudent=0;
    for(int i=0;i<n;i++){
        if(pagestudent+arr[i]<=mid) pagestudent += arr[i];
        else{
            stud++;
            pagestudent=arr[i];
        }
    }
    return stud;
}

int allocate_book(int arr[],int n,int students){
    int low=*max_element(arr,arr+n);
    int high=accumulate(arr,arr+n,0);
    while(low<=high){
        int mid=(low+high)/2;
       int no_of_stud=func(arr,n,mid);
       if(no_of_stud>students) low=mid+1;
       else high=mid-1;
    }
    return low;
}

int main(){
    int n;
    cout<<"enter the size of array :";
    cin>>n;
    int arr[n];
    cout<<"enter the element in array : ";
    for(int i=0;i<n;i++)cin>>arr[i];
    int students;
    cout<<"enter the no. of students : ";
    cin>>students;
 int result=allocate_book(arr,n,students);
 cout<<"result is : "<<result;
    return 0;
}