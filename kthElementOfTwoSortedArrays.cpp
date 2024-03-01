#include<bits/stdc++.h>
int kthElement(vector<int> &a, vector<int>& b, int n1, int n2, int k){
  
	if(n1>n2){
		return kthElement(b,a,n2,n1,k);
	}
	int l1=INT_MIN,l2=INT_MIN;
	int r1=INT_MAX,r2=INT_MAX;
	int s=max(0,k-n2);
	int e=min(k,n1);
	int size=n1+n2;
    int left=k;
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
			return double(max(l1,l2));
		}
		else if(l2>r1){
			s=mid1+1;
		}
		else{
			e=mid1-1;
		}
	}
	return 0;
}