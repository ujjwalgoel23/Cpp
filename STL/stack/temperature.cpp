// --------------------LEETCODE QUES:739. Daily Temperatures------------------------------------------------
//------------Gives Correct Output but doubt---------------------------------------
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<pair<int,int>>st;
        vector<int>v;
        vector<int>v2;
    for(int i=temp.size()-1;i>=0;i--){
        if(st.size()==0){
            v.push_back(0);
        }
        else if(st.size()>0 && temp[i]<st.top().first){
            v.push_back(st.top().second);
        }
       else if(st.size()>0 && temp[i]>=st.top().first){
        while(st.size()>0 && temp[i]>=st.top().first){
            st.pop();
        }
          if(st.size()==0){
            v.push_back(0);
          }
          else {
            v.push_back(st.top().second);
          }
       }
       st.push({temp[i],i});
    }
 reverse(v.begin(),v.end());
 for(int i=0;i<v.size();i++){
  if(v[i]>0){
   v2.push_back(v[i]-i); //doubt is that agar hm yha pr "v2[i]=v[i]-i" kr rhe hai toh run time error dikhaa rhaa hai
   // leetcode pe , pr aasa kyu??
  }
  else {
    v2.push_back(v[i]);
 }
 }
   return v2;
    }
};
