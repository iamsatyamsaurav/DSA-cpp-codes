void solve(string s,string ans,vector<string>&v,int index,int n){
    if(index==n){
        v.push_back(ans);
        return;
    }
    //take
    ans.push_back(s[index]);
    solve(s,ans,v,index+1,n);

    //not take
    ans.pop_back();
    solve(s,ans,v,index+1,n);
    return;
}
vector<string> generateSubsequences(string s)
{
    int n=s.size();
    string ans="";
    vector<string>v;
    int index=0;
    solve(s,ans,v,index,n);
    return v;
}