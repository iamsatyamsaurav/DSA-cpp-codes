int searchInsert(vector<int>& arr, int m)
{
	//same as finding lower bound
	int n=arr.size();
	int s=0;
	int e=n-1;
	int mid=s+(e-s)/2;
	int ans=n;
	while(s<=e){
		if(arr[mid]>=m){
			e=mid-1;
			ans=mid;
		}
		else{
			s=mid+1;
		}
		mid=s+(e-s)/2;
	}
	return ans;

	

	// int n=arr.size();
	// if(n==0){
	// 	return 0;
	// }
	// int ans=n;
	// int s=0;
	// int e=n-1;
	// int mid=s+(e-s)/2;
	// while(s<=e){
	// 	if(arr[mid]==m){
	// 		return mid;
	// 	}
	// 	else if(arr[mid]<m){
	// 		s=mid+1;
	// 	}
	// 	else{
	// 		ans=mid;
	// 		e=mid-1;
	// 	}
	// 	mid=s+(e-s)/2;
		
	// }
	// return ans;	
}