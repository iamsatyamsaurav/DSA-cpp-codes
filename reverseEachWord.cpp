#include <bits/stdc++.h> 
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

string reverseEachWord(string s)
{
    int n=s.length();
    stack<char>st;
    string ans="";
    for(int i=0;i<n;i++){
        if(s[i]==' ') continue;
        while(i<n && s[i]!=' '){
            st.push(s[i]);
            i++;
        }
        while(st.size()>0){
            char element=st.top();
            st.pop();
            ans+=element;
        }
        ans+=' ';
    }
    ans.pop_back();
    return ans;
}

int main()
{

    string str;
    getline(cin, str);
    string ans = reverseEachWord(str);
    cout << ans << endl;
    ;
}