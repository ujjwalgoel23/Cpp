#include<bits/stdc++.h>
using namespace std;
int main(){
int size;
cout<<"enter size:";
cin>>size;
int arr[size];
cout<<"enter element:";
for(int i=0;i<size;i++){
 cin>>arr[i];
}
int k1;
cout<<"enter the value of k1:";
cin>>k1;

int first;
priority_queue<int>maxh;
for(int j=0;j<size;j++){
    maxh.push(arr[j]);
    if(maxh.size()>k1){
        maxh.pop();
    }
}
first=maxh.top();
cout<<first<<endl;
int k2;
cout<<"enter the value of k2: ";
cin>>k2;
int second;
priority_queue<int>maxh2;
for(int j=0;j<size;j++){
    maxh2.push(arr[j]);
    if(maxh2.size()>k2){
         maxh.pop();
    }
}
second=maxh2.top();
cout<<second<<endl;
int sum=0;
for(int k=0;k<size;k++){
    if(arr[k]>first && arr[k]<second){
        sum=sum+arr[k];
    }
    
}
cout<<sum;



    return 0;
}
