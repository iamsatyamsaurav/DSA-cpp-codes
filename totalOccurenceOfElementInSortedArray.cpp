int findFirst(vector<int>& arr,int size, int key){
    int start=0,end=size-1;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}
int findLast(vector<int>& arr,int size, int key){
    int start=0,end=size-1;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}
int count(vector<int>& arr, int n, int x) {
	int firstOcc=findFirst(arr,n,x);
	int lastOcc=findLast(arr,n,x);
	if(firstOcc==-1){
		return 0;
	}
	return (lastOcc-firstOcc)+1;
}
