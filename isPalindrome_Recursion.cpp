#include<iostream>
using namespace std;
bool checkPalindrome(string s,int i,int j){
    if(i>=j)
    return 1;
    if(s[i]!=s[j])
    return 0;
    return checkPalindrome(s,i+1,j-1);
}
int main(){
    string str="AabbaAn";
    bool ans=checkPalindrome(str,0,str.length()-1);
    if(ans)
    cout<<"YEs";
    else
    cout<<"no";
}