#include <bits/stdc++.h>
using namespace std;

void printvec(vector<pair<int,int>>&v){
    cout<<"size:"<<v.size()<<endl;
    int i;
    for(i=0;i<v.size();i++){
      cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    
}

int main(){
    vector <pair <int,int> > v={{1,2},{3,4},{5,6}};

 printvec(v);
 int n;
 cout<<"enter the value of n"<<endl;
 cin>>n;
 for(int i=0;i<n;i++){
    int x,y;
    cin>>x>>y;
     v.push_back({x,y}); 
    // v.push_back(make_pair(x,y));
 }
 printvec(v);
    return 0;

}
