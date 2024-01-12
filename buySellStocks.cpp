class Solution {
public:
    int maxProfit(vector<int>& prices) {

        //OPTIMAL APPROACH:

        int maxProfit=0;
        int minimal=INT_MAX;
        for(int i=0;i<prices.size();i++){
            minimal=min(minimal,prices[i]);
            maxProfit=max(prices[i]-minimal,maxProfit);
        }
        return maxProfit;

        //BRUTE FORCE APPROACH:

        // int profit=0,maxProfit=0,maxmaxProfit=0;
        // int n=prices.size();
        // for(int i=0;i<n;i++){
        //     int element=prices[i];
        //     for(int j=i+1;j<n;j++){
        //         if(prices[j]>prices[i]){
        //             profit=prices[j]-prices[i];
        //         }
        //         maxProfit=max(profit,maxProfit);
        //     }
        //     maxmaxProfit=max(maxProfit,maxmaxProfit);
        // }
        // return maxmaxProfit;
    }
};