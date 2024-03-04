class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        bool isNeg=false;
        int ans=0;
        while(s[i]==' '){
            i++;
        }
        if(s[i]=='-'){
            isNeg=true;
            i++;
        }
        else if(s[i]=='+'){
            i++;
        }
        for(int j=i;j<s.length();j++){
            if(s[j]<'0' || s[j]>'9') break;
            int digit=s[j]-'0';
            //overflow condition
            if(ans > INT_MAX / 10 || (ans == INT_MAX / 10 && digit > 7)) {
                return isNeg ? INT_MIN : INT_MAX;
            }
            ans=(ans*10)+digit;
        }
        if(isNeg){
            ans=ans*-1;
        }
        return ans;
    }
};