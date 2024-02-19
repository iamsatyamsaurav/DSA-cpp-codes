int singleNonDuplicate(vector<int>& arr)
{
	//Binary search approach
	int n=arr.size();
	int s=1,e=n-2;
	if(n==1){
		return arr[0];
	}
	if(arr[0]!=arr[1]){
		return arr[0];
	}
	if(arr[n-1]!=arr[n-2]){
		return arr[n-1];
	}
	while(s<=e){
		int mid=s+(e-s)/2;
		if(arr[mid-1]!=arr[mid] && arr[mid]!=arr[mid+1]){
			return arr[mid];
		}
		//we are in left half so eliminate it
		if((mid%2==0 && arr[mid+1]==arr[mid])||(mid%2==1 && arr[mid]==arr[mid-1])){
			s=mid+1;
		}
		//we are in right part so eliminate it
		else{
			e=mid-1;
		}
	}
	
	//XOR approach

	// int ans=0;
	// int n=arr.size();
	// for(int i=0;i<n;i++){
	// 	ans=ans^arr[i];
	// }
	// return ans;
}