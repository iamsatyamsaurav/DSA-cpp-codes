#include<iostream>
#include<stack>
using namespace std;
int main(){
    string s="satyam";
    string ans="";
    stack<char>st;
    for(int i=0;i<s.length();i++){
        st.push(s[i]);
    }
    for(int i=0;i<s.length();i++){
        ans.push_back(st.top());
        st.pop();
    }
    cout<<"reversed string is : "<<ans<<endl;
}