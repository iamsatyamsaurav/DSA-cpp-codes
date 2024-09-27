int elementThatAppearsOnce(vector<int> arr) {
	// 1. We can use map but there will be extra space overhead
	// 2. We can use the i+3 loop approach where we first sort and then stand at the middle of the three similar numbers
	// 3. We can use the non intutive bitwise approach as this is the most optimal one

	//2.

	// int n=arr.size();
	// sort(arr.begin(),arr.end());
	// for(int i=1;i<n;i+=3){
	// 	if(arr[i]!=arr[i-1]){
	// 		return arr[i-1];
	// 	}
	// }
	// return arr[n-1];

	//3.
	int n=arr.size();
	int once=0;
	int twice=0;
	for(int i=0;i<n;i++){
		once=(once^arr[i])&~twice;
		twice=(twice^arr[i])&~once;
	}
	return once;


}