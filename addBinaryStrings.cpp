#include<bits/stdc++.h>
string addBinaryString(string &a, string &b, int n, int m)
{
        int i=n-1;
        int j=m-1;
        char carry='0';
        string ans="";
        while(i>=0 && j>=0){
            if(a[i]=='0' && b[j]=='0' && carry=='0'){
                ans.push_back('0');
                carry='0';
            }
            else if(a[i]=='0' && b[j]=='0' && carry=='1'){
                ans.push_back('1');
                carry='0';
            }
            else if(a[i]=='0' && b[j]=='1' && carry=='0'){
                ans.push_back('1');
                carry='0';
            }
            else if(a[i]=='0' && b[j]=='1' && carry=='1'){
                ans.push_back('0');
                carry='1';
            }
            else if(a[i]=='1' && b[j]=='0' && carry=='0'){
                ans.push_back('1');
                carry='0';
            }
            else if(a[i]=='1' && b[j]=='0' && carry=='1'){
                ans.push_back('0');
                carry='1';
            }
            else if(a[i]=='1' && b[j]=='1' && carry=='0'){
                ans.push_back('0');
                carry='1';
            }
            else if(a[i]=='1' && b[j]=='1' && carry=='1'){
                ans.push_back('1');
                carry='1';
            }
            i--;
            j--;

        }
        while(i>=0){
            if(a[i]=='0' && carry=='0'){
                ans.push_back('0');
                carry='0';
            }
            else if(a[i]=='0' && carry=='1'){
                ans.push_back('1');
                carry='0';
            }
            else if(a[i]=='1' && carry=='0'){
                ans.push_back('1');
                carry='0';
            }
            else if(a[i]=='1' && carry=='1'){
                ans.push_back('0');
                carry='1';
            }
            i--;
        }
        while(j>=0){
            if(b[j]=='0' && carry=='0'){
                ans.push_back('0');
                carry='0';
            }
            else if(b[j]=='0' && carry=='1'){
                ans.push_back('1');
                carry='0';
            }
            else if(b[j]=='1' && carry=='0'){
                ans.push_back('1');
                carry='0';
            }
            else if(b[j]=='1' && carry=='1'){
                ans.push_back('0');
                carry='1';
            }
            j--;
        }
        if(carry=='1'){
            ans.push_back('1');
            carry='0';
        }
        reverse(ans.begin(),ans.end());
        return ans;
}