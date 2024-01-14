#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	
	



	vector<int>arr2(n,0);
	int i;
	for(i=0;i<n;i++){
		arr2[arr[i]]++;
	}
	for(i=0;i<n;i++){
		if(arr2[i]>1){
			break;
		}
	}
	return i;

}