class Solution {
public:
    int maxDepth(string s) {
        int ans=0,count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                count++;
            }
            if(s[i]==')'){
                count--;
            }
            ans=max(count,ans);
        }
        return ans;
    }
};