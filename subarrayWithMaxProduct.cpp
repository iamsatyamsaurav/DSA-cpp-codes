#include<vector>
#include<climits>
int subarrayWithMaxProduct(vector<int> &arr){
	//optimal:
	int n=arr.size();
	int suff=1;
	int pre=1;
	int ans=INT_MIN;
	for(int i=0;i<n;i++){
		if(suff==0){
			suff=1;
		}
		if(pre==0){
			pre=1;
		}
		pre=pre*arr[i];
		suff=suff*arr[n-i-1];
		ans=max(ans,max(pre,suff));
	}
	return ans;



    //brute force:
	// int n=arr.size();
	// int maxProd=INT_MIN;
	// for(int i=0;i<n;i++){
	// 	int product=1;
	// 	for(int j=i;j<n;j++){
	// 		product=product*arr[j];
	// 		maxProd=max(maxProd,product);
	// 	}

	// }
	// return maxProd;
}