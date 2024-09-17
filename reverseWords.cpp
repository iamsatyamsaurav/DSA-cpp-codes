#include<iostream>
using namespace std;
string reverseWords(string s,int start,int end){
    while(start<end){
        swap(s[start++],s[end--]);
    }
    return s;
}
int main(){
    string s="I am Satyam Saurav";
    int start=0,end;
    for(int i=0;i<=s.length();i++){
        if(s[i]==' '){
            end=i-1;
            s=reverseWords(s,start,end);
            start=i+1;
        }
        if(s[i]=='\0'){
            end=i-1;
            s=reverseWords(s,start,end);
        }
    }
    cout<<s<<endl;
    
    
}