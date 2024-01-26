#include <bits/stdc++.h> 
int firstCircularTour(vector<int>& petrol, vector<int>& distance, int N)
{
	int deficit=0;
	int balance=0;
	int start=0;
	for(int i=0;i<N;i++){
		balance=balance+petrol[i]-distance[i];
		if(balance<0){
			start=i+1;
			deficit=deficit+balance;
			balance=0;

		}
	}
	if(balance+deficit>=0){
		return start;
	}
	else{
		return -1;
	}
}
