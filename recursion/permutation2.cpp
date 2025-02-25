/*iss ques. me dupliacte he allowed honge
example---> [1,1,2]=>[1,1,2]
                     [1,2,1]
                     [2,1,1]
*/ 
#include<bits/stdc++.h>
using namespace std;

void permute(int arr[],int n,vector<vector<int>>&ans,int index){
  //base condition
  if(index==n){
   ans.push_back(vector<int>(arr,arr+n)); // we convert array(arr) to vector before pushing it
    return ;
  }
  vector<bool>use(21,0);
  for(int i=index;i<n;i++){
    if(use[arr[i]+10]==0){
   swap(arr[i],arr[index]);
   permute(arr,n,ans,index+1);
   swap(arr[i],arr[index]);
   use[arr[i]+10]=1;
  }
}
}

int main(){
        int n;
        cout<<"enter the size of array : ";
        cin>>n;
        int arr[n];
        cout<<"enter the element in array : ";
        for(int i=0;i<n;i++)cin>>arr[i];
        vector<vector<int>>ans;
        permute(arr,n,ans,0);
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans[i].size();j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
    }
