// #include<bits/stdc++.h>
// using namespace std;
// // extra space    T.C=>o(n*n!) ;  S.C=>o(n)
// void permute(int arr[],vector<vector<int>>&ans,vector<int>&temp, vector<bool>&visited){
//     //base condition
//      if(temp.size()==visited.size()){
//         ans.push_back(temp);
//         return ;
//      }
//     //checking
//     for(int i=0;i<visited.size();i++){
//         if(visited[i]==0){
//             visited[i]=1;
//             temp.push_back(arr[i]);
//             permute(arr,ans,temp,visited);
//             visited[i]=0;
//             temp.pop_back();
//         }
//     }

// }

// int main(){
//     int n;
//     cout<<"enter the size of array : ";
//     cin>>n;
//     int arr[n];
//     cout<<"enter the element in array : ";
//     for(int i=0;i<n;i++)cin>>arr[i];
//     vector<vector<int>>ans;
//     vector<int>temp;
//     vector<bool>visited(3,0);
//     permute(arr,ans,temp,visited);
//     for(int i=0;i<ans.size();i++){
//         for(int j=0;j<ans[i].size();j++){
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }



// without extra space 
#include<bits/stdc++.h>
using namespace std;

void permute(int arr[],int n,vector<vector<int>>&ans,int index){
  //base condition
  if(index==n){
   ans.push_back(vector<int>(arr,arr+n)); // we convert array(arr) to vector before pushing it
    return ;
  }
  for(int i=index;i<n;i++){
   swap(arr[i],arr[index]);
   permute(arr,n,ans,index+1);
   swap(arr[i],arr[index]);
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
