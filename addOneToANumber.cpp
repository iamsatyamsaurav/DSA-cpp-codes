#include <bits/stdc++.h> 
vector<int> addOneToNumber(vector<int> arr)
{
    vector<int>ans;
    int n=arr.size();
    int i=n-1;
    int carry=0;
    int sum=arr[i]+1+carry;
    int digit=sum%10;
    carry=sum/10;
    ans.push_back(digit);
    i--;

    while(i>=0){
        sum=arr[i]+carry;
        digit=sum%10;
        carry=sum/10;
        ans.push_back(digit);
        i--;
    }
    while(carry!=0){
        ans.push_back(carry);
        carry=0;
    }
    reverse(ans.begin(),ans.end());
    i=0;
    while(ans[i]==0){
        i++;
    }
    ans.erase(ans.begin(),ans.begin()+i);
    return ans;

}