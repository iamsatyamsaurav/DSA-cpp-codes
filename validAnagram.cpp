class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        vector<int>count(26,0);
        for(int i=0;i<s.size();i++){
            count[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++){
           int c= --count[t[i]-'a'];
            if(c<0){
                return false;
            }
        }
        return true;
    }
};