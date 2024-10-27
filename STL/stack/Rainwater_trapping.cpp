

#include<bits/stdc++.h>
using namespace std;

void maximumleft(int height[],int n,int maxl[]){
    
    maxl[0]=height[0];
    for(int i=1;i<n;i++){
        maxl[i]=max(maxl[i-1],height[i]);
    }
    
}

void maximumright(int height[],int n,int maxr[]){
    
    maxr[n-1]=height[n-1];
    for(int i=n-2;i>=0;i--){
        maxr[i]=max(maxr[i+1],height[i]);
    }
    
}

int main(){
    int n;
    cout<<"enter no. of building: ";
    cin>>n;
    int height[n];
    cout<<"enter height of each building";
    for(int i=0;i<n;i++){
        cin>>height[i];
    }
    int maxl[n];
    int maxr[n];

    maximumleft(height,n,maxl);
    maximumright(height,n,maxr);
    
    int water[n];
    for(int i=0;i<n;i++){
        water[i]=min(maxl[i],maxr[i])-height[i];
    }
    int area=0;
    for(int k=0;k<n;k++){
        area=area+water[k];
    }
    cout<<"area: "<<area;
    return 0;

}