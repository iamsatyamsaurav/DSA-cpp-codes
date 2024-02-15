int upperBound(vector<int> &arr, int x, int n){
	int ans=n;
	int s=0;
	int e=n-1;
	int mid=s+(e-s)/2;
	while(s<=e){
		if(arr[mid]<=x){
			s=mid+1;
		}
		else{
			ans=mid;
			e=mid-1;
		}
		mid=s+(e-s)/2;
	}	
	return ans;
}