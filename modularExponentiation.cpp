#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
	int res=1;
	while(n>0){
		if(n&1){
			res=(1LL*res*x)%m; //typecast into long long
		}
		x=(1LL*x*x)%m;
		n=n>>1;
	}
	return res;
}	
	