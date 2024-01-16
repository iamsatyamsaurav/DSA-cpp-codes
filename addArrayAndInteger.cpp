class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        
        vector<int>ans;
        int n=num.size();
        int i=n-1;
        int sum=0,carry=0;
        int j;
        if(k==0){
            return num;
        }
        if(n==1 && num[0]==0){
           while(k>0){
                sum=k%10;
                ans.push_back(sum);
                k=k/10;
           }
           reverse(ans.begin(),ans.end());
           return ans;
        }
        while(i>=0 && k>0){
            j=k%10;
            sum=num[i]+j+carry;
            carry=sum/10;
            sum=sum%10;
            k=k/10;
            ans.push_back(sum);
            i--;
        }
        while(i>=0){
            sum=num[i]+carry;
            carry=sum/10;
            sum=sum%10;
            ans.push_back(sum);
            i--;
        }
        while(k>0){
            j=k%10;
            sum=j+carry;
            carry=sum/10;
            sum=sum%10;
            k=k/10;
            ans.push_back(sum);
        }
        while(carry!=0){
            sum=carry;
            carry=sum/10;
            sum=sum%10;
            ans.push_back(sum);

        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};