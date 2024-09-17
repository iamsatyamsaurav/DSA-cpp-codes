class Solution {
public:
    void reverseString(vector<char>& s) {
      //  reverse(s.begin(),s.end());
      int start=0,e=s.size()-1;
      while(start<e){
          char temp=s[start];
          s[start]=s[e];
          s[e]=temp;
          start++;
          e--;
      }
        
    }
};