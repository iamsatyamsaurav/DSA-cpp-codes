#include <bits/stdc++.h> 
char toLower(char ch){
    if((ch>='a'&&ch<='z')||(ch>='0'&&ch<='9')){
        return ch;
    }
    else{
        return (ch+32);
    }
}
bool valid(char ch){
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')||(ch>='0'&&ch<='9')){
        return 1;
    }
    else{
        return 0;
    }
}
bool isPalindrome(string s){
    int i=0,j=s.length()-1;
    while(i<j){
        if(toLower(s[i])!=toLower(s[j])){
            return 0;
        }
        else{
            i++;
            j--;
        }
    }
    return 1;
}
bool checkPalindrome(string s)
{
    string temp="";
    for(int i=0;i<s.size();i++){
        if(valid(s[i])){
            temp.push_back(s[i]);
        }
    }

    
    return isPalindrome(temp);
}