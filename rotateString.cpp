#include<bits/stdc++.h>
class Solution {
public:
    
    bool rotateString(string s, string goal) {
       if(s.length()!=goal.length()){
           return false;
       }
       s+=s;
       if(s.find(goal)!=-1){
           //substring found
           return true;
       }
       else{
           return false;
       }
        
    }
};