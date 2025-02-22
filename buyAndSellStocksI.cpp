class Solution {
public:
    int maxProfit(vector<int>& prices) {

        // int n=prices.size();
        // int maxProfit=INT_MIN;
        // for(int i=0;i<n;i++){
        //     for(int j=i;j<n;j++){
        //         int profit=prices[j]-prices[i];
        //         maxProfit=max(profit,maxProfit);
        //     }
        // }
        // return maxProfit;

        int n=prices.size();
        int mini=INT_MAX;
        int maxProfit=INT_MIN;
        for(int i=0;i<n;i++){
            mini=min(mini,prices[i]);
            int profit=prices[i]-mini;
            maxProfit=max(profit,maxProfit);
        }
        return maxProfit;























        // int n=prices.size();
        // int maxProfit=0;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         int profit=prices[j]-prices[i];
        //         maxProfit=max(profit,maxProfit);
        //     }
        // }
        // return maxProfit;

        // int n= prices.size();
        // int mini=INT_MAX;
        // int maxProfit=0;
        // for(int i=0;i<n;i++){
        //     mini=min(mini,prices[i]);
        //     int profit=prices[i]-mini;
        //     maxProfit=max(profit,maxProfit);
        // }
        // return maxProfit;






























        // int n=prices.size();
        // int maxProfit=0;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //        int  profit=prices[j]-prices[i];
        //         maxProfit=max(profit,maxProfit);
        //     }
        // }
        // return maxProfit;

        // int n=prices.size();
        // int minimal=INT_MAX;
        // int maxProfit=0;
        // for(int i=0;i<n;i++){
        //     minimal=min(minimal,prices[i]);
        //     int profit=prices[i]-minimal;
        //     maxProfit=max(profit,maxProfit);
        // }
        // return maxProfit;


        // int n=prices.size();
        // int minimal=INT_MAX;
        // int maxProfit=0;
        // for(int i=0;i<n;i++){
        //     minimal = min(minimal,prices[i]);
        //     int profit=prices[i]-minimal;
        //     maxProfit=max(profit,maxProfit);
        // }
        // return maxProfit;


      
    }
};