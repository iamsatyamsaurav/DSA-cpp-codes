class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.length();
        bool isOdd=false;
        int j;
        for( j=n-1;j>=0;j--){
            int digit=num[j]-'0';
            if(digit%2!=0){
                isOdd=true;
                break;
            }
        }
        if(isOdd){
            int i=n-1;
            while(i>j){
                i--;
                num.pop_back();
            }
            return num;
        }
        return "";
    }
};