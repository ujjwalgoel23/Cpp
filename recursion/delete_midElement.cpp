#include<bits/stdc++.h>
using namespace std;

void deleteMid(stack<int>&st,int size){
if(size%2==0 && st.size()==(size/2)){
  st.pop();
    return;
}
else if(st.size()==(size/2)+1){
    st.pop();
    return;
}
int temp=st.top();
st.pop();
deleteMid(st,size);
st.push(temp);
return;
}

int main(){
    int n;
    cin>>n;
    stack<int>st;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        st.push(x);
    }
    deleteMid(st,st.size());
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}