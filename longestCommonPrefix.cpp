class Solution {
public:
    string findCommon(string s1,string s2){
        string common="";
        int n=min(s1.length(),s2.length());
        for(int i=0;i<n;i++){
            if(s1[i]==s2[i]){
                common.push_back(s1[i]);
            }
            else{
                break;
            }
        }
        return common;
    }
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        string ans=strs[0];
        for(int i=1;i<n;i++){
            ans=findCommon(ans,strs[i]);
        }
        return ans;

    }
};