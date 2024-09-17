#include <bits/stdc++.h> 
long long int rob(vector<int>& nums) {
    int n=nums.size();
    //space optimisation
    long long int prev=nums[0];
    long long int prev2=0;
    for(int i=1;i<n;i++){
        long long int take=nums[i]+prev2;
        long long int notTake=0+prev;
        long long int curri=max(take,notTake);
        prev2=prev;
        prev=curri;
    }
    return prev;
}
long long int houseRobber(vector<int>& valueInHouse)
{
    int n=valueInHouse.size();
    if(n==1){
        return valueInHouse[0];
    }
    vector<int>temp1,temp2;
    for(int i=0;i<n;i++){
        if(i!=0){
            temp1.push_back(valueInHouse[i]);  //excluding first element
        }
        if(i!=n-1){
            temp2.push_back(valueInHouse[i]);  //excluding last element
        }
    }

    return max(rob(temp1),rob(temp2));


}