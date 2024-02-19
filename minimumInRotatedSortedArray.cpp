int findMin(vector<int>& arr)
{
	int n=arr.size();
	int s=0,e=n-1,ans=INT_MAX;
	while(s<=e){
		int mid=s+(e-s)/2;
		//left part sorted
		if(arr[s]<=arr[mid]){
			ans=min(ans,arr[s]);
			s=mid+1;
		}
		else{
			//right part sorted
			ans=min(ans,arr[mid]);
			e=mid-1;
		}
	}
	return ans;


	// int n=arr.size();
	// int s=0;
	// int e=n-1;
	// int mid=s+(e-s)/2;
	// while(s<e){
	// 	if(arr[mid]>=arr[0]){
	// 		s=mid+1;
	// 	}
	// 	else{
	// 		e=mid;
	// 	}
	// 	mid=s+(e-s)/2;
	// }
	// if(e==n-1){
	// 	return arr[0];
	// }
	// return arr[s];

	// bool flag=true;
	// for(int i=0;i<n-1;i++){
	// 	if(arr[i]>arr[i+1]){
	// 		flag=false;
	// 	}
	// }
	
	// if(flag){
	// 	return arr[0];
	// }
	// else{
	// 	return arr[s];
	// }
	
}