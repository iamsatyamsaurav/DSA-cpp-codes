class Solution {
public:
    int findSum(int &temp){
        int sum=0;
        while(temp>0 ){
            int digit=temp%10;
            temp=temp/10;
            sum+=digit*digit;
        }
        return sum;
    }
    bool isHappy(int num) {
        int ans=findSum(num);
        while(ans!=1){
            ans=findSum(ans);
            if(ans!=1 &&ans<10){
                return false;
            }
        }
        return true;

        

        
    }
};