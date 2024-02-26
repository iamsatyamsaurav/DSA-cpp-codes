// void merge(vector<int>a,vector<int>b,vector<int>&arr){
// 	int n=a.size();
// 	int m=b.size();
// 	int i=0;
// 	int j=0;
// 	int k=0;
// 	while(i<n && j<m){
// 		if(a[i]<=b[j]){
// 			arr[k]=a[i];
// 			i++;
// 			k++;
// 		}
// 		else{
// 			arr[k++]=b[j++];
// 		}
// 	}
// 	while(i<n){
// 		arr[k]=a[i];
// 			i++;
// 			k++;
// 	}
// 	while(j<m){
// 		arr[k++]=b[j++];
// 	}
// }
double median(vector<int>& a, vector<int>& b) {

	//Method 3------>most optimal 
	int n1=a.size();
	int n2=b.size();
	if(n1>n2){
		return median(b,a);
	}
	int left=(n1+n2+1)/2;
	int l1=INT_MIN,l2=INT_MIN;
	int r1=INT_MAX,r2=INT_MAX;
	int s=0;
	int e=n1;
	int size=n1+n2;
	while(s<=e){
		int mid1=s+(e-s)/2;
		int mid2=left-mid1;
		int l1=INT_MIN,l2=INT_MIN;
		int r1=INT_MAX,r2=INT_MAX;	
		if(mid1<n1) r1=a[mid1];
		if(mid2<n2) r2=b[mid2];
		if(mid1-1>=0) l1=a[mid1-1];
		if(mid2-1>=0) l2=b[mid2-1];
		if(l1<=r2 && l2<=r1){
			if(size%2==0){
				return double(max(l1,l2)+min(r1,r2))/2.0;
			}
			else return double(max(l1,l2));
		}
		else if(l2>r1){
			s=mid1+1;
		}
		else{
			e=mid1-1;
		}
	}
	return 0;
	


	//Method 2
	// int n=a.size();
	// int m=b.size();
	// int i=0;
	// int j=0;
	// int size=m+n;
	// int index2=(m+n)/2;
	// int index1=index2-1;
	// int index1Element=-1;
	// int index2Element=-1;
	// int count=0; //index tracker
	// while(i<n && j<m){
	// 	if(a[i]<=b[j]){
	// 		if(count==index1){
	// 			index1Element=a[i];
	// 		}
	// 		if(count==index2){
	// 			index2Element=a[i];
	// 		}
		
	// 		count++;
	// 		i++;
	// 	}
	// 	else{
	// 		if(count==index1){
	// 			index1Element=b[j];
	// 		}
	// 		if(count==index2){
	// 			index2Element=b[j];
	// 		}
			
	// 		count++;
	// 		j++;
	// 	}
	// }
	// while(i<n){
	// 	if(count==index1){
	// 		index1Element=a[i];
	// 	}
	// 	if(count==index2){
	// 		index2Element=a[i];
	// 	}
		
	// 	count++;
	// 	i++;
	// }
	// while(j<m){
	// 	if(count==index1){
	// 		index1Element=b[j];
	// 	}
	// 	if(count==index2){
	// 		index2Element=b[j];
	// 	}
		
	// 	count++;
	// 	j++;	
	// }
	// if(size%2==1){
	// 	return double(index2Element);
	// }
	// else{
	// 	return double(index1Element+index2Element)/2;
	// }







	//Method 1
	// int n=a.size();
	// int m=b.size();
	// vector<int>arr(n+m);
	// merge(a,b,arr);
	// int size=arr.size();
	// double ans;
	// if(size%2!=0){
	// 	//odd length
	// 	int mid=size/2;
	// 	ans=double(arr[mid]);
		
	// }
	// else{
	// 	//even length
	// 	int mid=size/2;
	// 	ans=double(arr[mid]+arr[mid-1])/2;
	// }
	// return ans;
}