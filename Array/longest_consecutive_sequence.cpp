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
    if(n==0) return 0;
    int longest=1;
    unordered_set<int>st;
    for(int i=0;i<n;i++) st.insert(arr[i]);
    for(auto it:st){
        if(st.find(it-1)==st.end()){
            int count=1;
            int x=it;
            while(st.find(x+1)!=st.end()){
                x++;
                count++;
            }
            longest=max(longest,count);
        }
    }
 cout<<"longest consecutive is : "<<longest;
    return 0;
}