class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int>mp;
        char ans;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            if(mp[s[i]]==2){
                ans=s[i];
                break;
            }
        }
        return ans;
    }
};