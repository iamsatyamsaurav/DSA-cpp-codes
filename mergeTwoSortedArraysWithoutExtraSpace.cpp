#include<vector>

void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
	// int m=a.size(); //smaller elements
	// int n=b.size(); //larger elements
	// int left=m-1;
	// int right=0;
	// while(left>=0 && right<n){
	// 	if(b[right]<a[left]){
	// 		swap(b[right],a[left]);
	// 		left--;
	// 		right++;
	// 	}
	// 	else{
	// 		break;
	// 	}
	// }
	// sort(a.begin(),a.end());
	// sort(b.begin(),b.end());
	// for(int i=0;i<n;i++){
	// 	a.push_back(b[i]);
	// }
	// while(!b.empty()){
	// 	b.pop_back();
	// }
	

	int m=a.size();
	int n=b.size();
	for(int j=0;j<n;j++){
		a.push_back(b[j]);
	}
	sort(a.begin(),a.end());
	while(!b.empty()){
		b.pop_back();
	}
	
	
	
}