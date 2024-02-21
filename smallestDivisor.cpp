int findMax(vector<int>arr){
	int maxi=INT_MIN;
	for(int i=0;i<arr.size();i++){
		maxi=max(maxi,arr[i]);
	}
	return maxi;
}
int findSum(vector<int>arr, int n){
	int sum=0;
	for(int i=0;i<arr.size();i++){
		sum=sum+ceil(double(arr[i])/n);
	}
	return sum;
}
int smallestDivisor(vector<int>& arr, int limit)
{
	int n=arr.size();
	int s=1;
	int e=findMax(arr);
	int ans=INT_MAX;
	while(s<=e){
		int mid=s+(e-s)/2;
		int sum=findSum(arr,mid);
		if(sum>limit){
			s=mid+1;
		}
		else{
			ans=mid;
			e=mid-1;
		}
	}
	return ans;
}