#include<bits/stdc++.h>
class Solution {
public:
    string removeOuterParentheses(string s) {
        int len=s.length();
        string ans="";
        stack<char>st;
        for(int i=0;i<len;i++){
            if(s[i]=='('){
                if(st.size()==0){
                    st.push('(');
                }
                else{
                    st.push('(');
                    ans.push_back('(');
                }
            }
            else{
                //closing bracket
                st.pop();
                if(st.size()>0){
                    ans.push_back(')');
                }
            }
        }
        return ans;
    }
};