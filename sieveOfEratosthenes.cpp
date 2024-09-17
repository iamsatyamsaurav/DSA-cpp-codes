class Solution {
public:
    int countPrimes(int n) {
        vector<bool>prime(n+1,true); //so that 0 to 40 elements can be marked there;
        prime[0]=prime[1]=false;
        int count=0;
        for(int i=2;i<n;i++){
            if(prime[i]){
                count++;
                for(int j=2*i;j<n;j=j+i){
                    prime[j]=false;
                }
            }
        }
        return count;
        
        
    }
};