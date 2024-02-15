int findFloor(vector<int>arr,int n,int x){
	int s=0;
	int e=n-1;
	int ans=-1;
	while(s<=e){
		int mid=s+(e-s)/2;
		if(arr[mid]<=x){
			ans=arr[mid];
			s=mid+1;
		}
		else{
			e=mid-1;
		}
	}
	return ans;
}
int findCeiling(vector<int>arr,int n,int x){
	//same as lower bound
	int s=0;
	int e=n-1;
	int ans=-1;
	while(s<=e){
		int mid=s+(e-s)/2;
		if(arr[mid]>=x){
			ans=arr[mid];
			e=mid-1;
		}
		else{
			s=mid+1;
		}
	}
	return ans;
}

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	pair<int,int>p;
	int floor=findFloor(a,n,x);
	int ceiling=findCeiling(a,n,x);
	p=make_pair(floor,ceiling);
	return p;
}