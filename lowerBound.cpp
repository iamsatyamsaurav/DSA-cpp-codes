int lowerBound(vector<int> arr, int n, int x) {
	int s=0;
	int e=n-1;
	int ans=n;
	int mid=s+(e-s)/2;
	while(s<=e){
		if(arr[mid]>=x){
			ans=mid;
			e=mid-1;
		}
		else{
			s=mid+1;
		}
		mid=s+(e-s)/2;
	}
	return ans;

	// int lb=lower_bound(arr.begin(),arr.end(),x)-arr.begin();
    // return lb;
}
