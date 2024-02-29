#include<bits/stdc++.h>
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        map<char,char>mp1,mp2;
        for(int i=0;i<s.length();i++){
            if(mp1.find(s[i])!=mp1.end()){
                //already present
                if(mp1[s[i]]!=t[i]){
                    return false;
                }
            }
            else if(mp2.find(t[i])!=mp2.end()){
                //already present
                if(mp2[t[i]]!=s[i]){
                    return false;
                }
            }
            else{
                mp1[s[i]]=t[i];
                mp2[t[i]]=s[i];
            }
        }
        return true;
    }
};