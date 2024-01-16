#include<set>
int removeDuplicates(vector<int> &arr, int n) {
	

	int i=0;
	for(int j=0;j<n;j++){
		if(arr[j]!=arr[i]){
			arr[i+1]=arr[j];
			i++;
		}
	}
	return i+1;




	// set<int>s;
	// for(int i=0;i<n;i++){
	// 	s.insert(arr[i]);
	// }
	// int index=0;
	// for(auto i:s){
	// 	arr[index]=i;
	// 	index++;
	// }
	// return index;
}