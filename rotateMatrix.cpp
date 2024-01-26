#include<vector>

void rotateMatrix(vector<vector<int>> &mat){
	int n=mat.size();
	//transpose
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			swap(mat[i][j],mat[j][i]);
		}
	}
	//reverse
	for(int row=0;row<n;row++){
		reverse(mat[row].begin(),mat[row].end());
	}

	
}