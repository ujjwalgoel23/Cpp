#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>st;
    st.push(2);
st.push(5);
st.push(7);
st.push(4);
cout<<st.top();
cout<<endl<<"after pop"<<endl;
st.pop();
cout<<st.top();

    return 0;
}