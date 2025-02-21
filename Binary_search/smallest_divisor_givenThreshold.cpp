#include<bits/stdc++.h>
using namespace std;

int sum_by_D(int arr[],int n,int mid){
    int sum=0;
    for(int i=0;i<n;i++)
    sum+=ceil((double)arr[i]/(double)mid);
    return sum;
}

int smallest_divisor(int arr[],int n, int threshold){
    int low=1;
    int high=*max_element(arr,arr+n);
    while(low<=high){
        int mid=(low+high)/2;
        if(sum_by_D(arr,n,mid)<=threshold) high=mid-1;
        else low=mid+1;
    }
    return low;
}
int main(){
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"enter the element in array : ";
    for(int i=0;i<n;i++)cin>>arr[i];
    int threshold;
    cout<<"enter the value of threshold : ";
    cin>>threshold;
int result=smallest_divisor(arr,n,threshold);
cout<<"smallest divisor is : "<<result;

    return 0;
}