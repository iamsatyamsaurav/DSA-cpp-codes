int firstOcc(vector<int>arr,int n,int element){
    int s=0;
    int e=n-1;
    int ans=n;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==element){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]>element){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}

int rowWithMax1s(vector<vector<int>> &matrix, int n, int m)
{
    //O(n*logm)

    int row=matrix.size();
    int col=matrix[0].size();
    int maxCount=0;
    int index=-1;
    for(int i=0;i<row;i++){
        int countOnes=col-firstOcc(matrix[i],col,1);
        if(countOnes>maxCount){
            maxCount=countOnes;
            index=i;
        }
    }
    return index;


    // int row=matrix.size();
    // int col=matrix[0].size();
    // int index=-1;
    // int maxSum=INT_MIN;
    // for(int i=0;i<row;i++){
    //     int sum=0;
    //     for(int j=0;j<col;j++){
    //         sum=sum+matrix[i][j];
    //     }
    //     if(sum>maxSum){
    //         maxSum=sum;
    //         index=i;
    //     }
        
        
    // }
    // return index;




    // int row=matrix.size();
    // int col=matrix[0].size();
    // vector<int>vec(row);
    // for(int i=0;i<row;i++){
    //     int count=0;
    //     for(int j=0;j<col;j++){
    //         if(matrix[i][j]==1){
    //             count++;
    //         }
    //     }
    //     vec[i]=count;
    // }
    // int maxi=INT_MIN;
    // int maxIndex=-1;
    // for(int i=0;i<vec.size();i++){
    //     if(vec[i]>maxi){
    //         maxi=vec[i];
    //         maxIndex=i;
    //     }
    // }
    // return maxIndex;
}