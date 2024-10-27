#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<int>a;
   int n;
   cout<<"element the no. of element which you want : ";
   cin>>n;
   cout<<"enter element in the vector : ";
   for(int i=0;i<n;i++){
    int k;
    cin>>k;
    a.push_back(k);
   }
   vector<int>ans;
   int maxi=INT_MIN;
   for(int i=(n-1);i>=0;i--){
    if(a[i]>maxi) ans.push_back(a[i]);
    maxi=max(maxi,a[i]);
   }
 sort(ans.begin(),ans.end());
 cout<<"resultant matrix is : ";
 for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<"  ";
     }
    return 0;
}