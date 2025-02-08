#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{

	vector<int>temp(n,0);
	int repeating,missing;
	for(int i=0;i<n;i++){
		int index=arr[i]-1;
		temp[index]++;
	}
	for(int i=0;i<n;i++){
		if(temp[i]==0){
			missing=i+1;
		}
		if(temp[i]==2){
			repeating=i+1;
		}
	}
	pair<int,int>p;
	p.first=missing;
	p.second=repeating;
	return p;
	
}
