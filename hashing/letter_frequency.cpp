// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     cout<<"enter string : ";
//     cin>>s;
    
//     int hash[26]={0};
//     for(int i=0;i<s.size();i++){
//         hash[s[i]-'a']++; 
//     }
//     int q;
//     cout<<"enter no. of character you want to search : ";
//     cin>>q;
//     while(q--){
//         char c;
//         cout<<" enter character :";
//         cin>>c;
//         cout<<hash[c-'a']<<endl;
//     }
//     return 0;
// }

// using map---------->
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
   map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    int q;
    cout<<"enter no. of character you want to search : ";
    cin>>q;
    while(q--){
     int number;
     cout<<" enter number :";
     cin>>number;
        cout<<mpp[number]<<endl;
    }
    return 0;
}