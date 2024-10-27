//----------------------------------------------------IMPORTANT FOR INTERVIEW------------------------------------------------
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[7]={6,2,5,4,5,1,6};

    //firstly we need to find nearest smaller to left element index  ... so code is:
    vector<int>left;
  stack<pair<int,int>>st;
  for(int i=0;i<7;i++){
    if(st.size()==0){
        left.push_back(-1);
    }
    else if(st.size()>0 && arr[i]>st.top().first){
          left.push_back(st.top().second);
    }
    else if(st.size()>0 && arr[i]<=st.top().first){
        while(st.size()>0 && arr[i]<=st.top().first){
            st.pop();
        }
        if(st.size()==0){
            left.push_back(-1);
        }
        else{
        left.push_back(st.top().second);
        }
    }
    st.push({arr[i],i});
  }

// now , we need to calculate nearest smaller to right element index...... so, the code is:
 vector<int>right;
  stack<pair<int,int>>s;
  for(int j=6;j>=0;j--){
    if(s.size()==0){
        right.push_back(7);
    }
    else if(s.size()>0 && arr[j]>s.top().first){
          right.push_back(s.top().second);
    }
    else if(s.size()>0 && arr[j]<=s.top().first){
        while(s.size()>0 && arr[j]<=s.top().first){
            s.pop();
        }
        if(s.size()==0){
            right.push_back(7);
        }
        else{
        right.push_back(s.top().second);
        }
    }
    s.push({arr[j],j});
    
  }
  reverse(right.begin(),right.end());
  
  
// now , we need to calculate width/breadth of vector:
vector<int>width;
for(int k=0;k<left.size();k++){
 width.push_back(right[k]-left[k]-1);
}


// //now, the area is:
vector<int>area;
for(int n=0;n<left.size();n++){
area.push_back(arr[n]*width[n]);
}
//max. element among the area:
int z=*max_element(area.begin(),area.end());

cout<<"area: "<<z;

    return 0;
}