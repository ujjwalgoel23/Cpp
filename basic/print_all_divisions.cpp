#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter number :";
    cin>>n;
  for(int i=1;i<=n;i++){ // this take o(n) time complexity...........
   if(n%i==0){
    cout<<i<<" ";
   }
   else {
    continue;
   }
  }
      //ANOTHER METHOD--->
      //method to decrease the time complexity--->
//       vector<int>v;
//     for(int i=1;i<=sqrt(n);i++){
//         if(n%i==0){
//            v.push_back(i);
//            if(n/i !=i){
//             v.push_back(n/i);
//            }
//         }
//     }
//  sort(v.begin(),v.end()); 
//  for( auto it:v){
//     cout<<it<<" ";
//  }
return 0;
}
 
    