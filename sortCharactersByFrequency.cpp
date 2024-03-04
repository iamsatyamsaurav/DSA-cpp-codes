class Solution {
public:
    bool static cmp(pair<char,int>&a,pair<char,int>&b){
        return a.second>b.second;
    }
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        vector<pair<char,int>>v;
        for(auto i:mp){
            v.push_back({i.first,i.second});
        }
        sort(v.begin(),v.end(),cmp);
        string ans="";
        for(auto i:v){
            for(int j=0;j<i.second;j++){
                ans+=i.first;
            }
        }
        return ans;
    }
};