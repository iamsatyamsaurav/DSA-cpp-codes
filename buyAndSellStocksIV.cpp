#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices, int n, int k)
{
    //Same as buy and sell stocks III with the value of cap as 'k'

    //space optimisation
    vector<vector<int>>ahead(2,vector<int>(k+1,0)),curr(2,vector<int>(k+1,0));
   //base case alredy 0;
   for(int index=n-1;index>=0;index--){
       for(int buy=0;buy<=1;buy++){
           for(int cap=1;cap<=k;cap++){
             if(buy){
                curr[buy][cap]= max((-prices[index]+ahead[0][cap]),
                            0+ahead[1][cap]);
            }
            else{
                curr[buy][cap]=max((prices[index]+ahead[1][cap-1]),
                            0+ahead[0][cap]);
            }  
           }
       }
       ahead=curr;
   }
   return ahead[1][k];
}
