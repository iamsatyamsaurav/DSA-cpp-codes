class Solution {
public:
   string removeDuplicates(string s) {
       stack<char>st;
       string ans="";
       for(int i=0;i<s.length();i++){
        if(st.empty() || st.top()!=s[i]){
            st.push(s[i]);
        }
        else if(st.top()==s[i]){
            st.pop();
        }
       }
       while(st.size()>0){
        ans.push_back(st.top());
        st.pop();
       }
       reverse(ans.begin(),ans.end());
       return ans;

        
    }
};