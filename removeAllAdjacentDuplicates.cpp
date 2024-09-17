#include<iostream>
using namespace std;
string removeDuplicates(string s) {
        for(int i=1;i<=s.length();i++){
            if(i<s.length()){
                if(s[i-1]==s[i]){
                s.erase(i-1,2);
                i=i-2;
            }
            }
            if(i+1<s.length()){
                if(s[i+1]==s[i]){
                s.erase(i,2);
                i--;
            }
            }
            
            
        }
        return s;
        
    }
int main(){
    string s="arooras";
    string temp=removeDuplicates(s);
    if(temp.length()==0){
        cout<<"555"<<endl;
    }
    else{
        cout<<temp<<endl;
    }

}