// LEETCODE- ques no:1475
//ques: final prices with special discount....

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int>st;
        vector<int>discount;
        for(int i=prices.size()-1;i>=0;i--){
            if(st.size()==0){
                discount.push_back(0);
            }
            else if(st.size()>0 && prices[i]>=st.top() ){
                discount.push_back(st.top());
            }
            
            else if(st.size()>0 && prices[i]<st.top()){
                while(st.size()>0 && prices[i]<st.top()){
                    st.pop();
                }
                if(st.size()==0){
                    discount.push_back(0);
                }
                else {
                    discount.push_back(st.top());
                }
            }
            st.push(prices[i]);
        }
        reverse(discount.begin(),discount.end());
   
   
   vector<int>ans;
   for(int i=0;i<prices.size();i++){
      ans.push_back(prices[i]-discount[i]);  /*agar hm isme ans[i]=prices[i]-discount[i] likh rhe hai toh runtime show kr
       rhaa hai leetcode pe but why, or agar push_back wale function se kre toh shii aa rha hai..
       toh ky reason haii iskaa?--->doubt
   }*/
   return ans;   
    }
};