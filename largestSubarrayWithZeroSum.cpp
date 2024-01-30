#include<vector>
#include<climits>
int getLongestZeroSumSubarrayLength(vector<int> &arr){
	//brute force:

	// int n=arr.size();
	// int count;
	// int maxCount=INT_MIN;
	// for(int i=0;i<n;i++){
	// 	int sum=0;
	// 	count=0;
	// 	for(int j=i;j<n;j++){
	// 		sum+=arr[j];
	// 		if(sum==0){
	// 			count=j-i+1;
				
	// 		}
	// 		maxCount=max(count,maxCount);
	// 	}
	// }
	
	// return maxCount;

	//optimal-------> presum method
	int sum=0;
	int maxi=0;
	unordered_map<int,int>mp;
	for(int i=0;i<arr.size();i++){
		sum+=arr[i];
		if(sum==0){
			maxi=i+1;    //because we are working with presum and if the sum
    					 //from staring index is 0 then definitely that subarray
						 //is the largest
		}
		else{
			if(mp.find(sum)!=mp.end()){ //sum matched in map
				maxi=max(maxi,i-mp[sum]);
			}
			else{
				mp[sum]=i;
			}
		}
	}
	return maxi;	
	
}