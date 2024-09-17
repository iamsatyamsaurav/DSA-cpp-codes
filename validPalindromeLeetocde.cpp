class Solution {
private:
    bool checkPalindrome(string s){
        int i=0,j=s.length()-1;
        while(i<j){
            if(s[i]!=s[j]){
                return 0;
            }
            else{
                i++;
                j--;
            }
        }
        return 1;
    }
    bool valid(char c){
        if((c>='a'&&c<='z')||(c>='A'&&c<='Z')||c>='0'&&c<='9'){
            return 1;
        }
        return 0;
    }
    char toLower(char c){
        if((c>='a'&&c<='z')||(c>='0'&&c<='9')){
            return c;
        }
        else{
            return (c+32);
        }
    }
public:
    bool isPalindrome(string s) {
        string temp="";
        for(int i=0;i<s.length();i++){
            if(valid(s[i])){
                temp.push_back(s[i]);
            }
        }
        for(int i=0;i<temp.size();i++){
           temp[i]=toLower(temp[i]);
        }
       return checkPalindrome(temp);
    }
};