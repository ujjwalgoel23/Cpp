#include<bits/stdc++.h>
using namespace std;

int sqrt(int n){
    int ans=-1;
    int low=1,high=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(mid*mid<=n) {
            ans=mid;
            low=mid+1;
        }
        else high=mid-1; 
    }
    return ans;
}

int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
 int result=sqrt(n);
 cout<<"sqrt of a number is "<<result;
    return 0;
}