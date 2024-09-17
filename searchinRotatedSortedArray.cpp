//linear search

// int search(vector<int>& arr, int n, int k)
// {
//     for(int i=0;i<n;i++){
//         if(arr[i]==k){
//             return i;
//         }
//     }
//     return -1;
// }


//binary search

int getPivot(vector<int>& arr, int n){
    int start=0,end=n-1;
    while(start<end){
        int mid=start+(end-start)/2;
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else{
            end=mid;
        }
    }
    return start;
}
int binarySearch(vector<int>& arr, int s,int e,int key){
    while(s<=e){
        int m=s+(e-s)/2;
        if(arr[m]==key){
            return m;
        }
        else if (key>arr[m]){
            s=m+1;
        }
        else{
            e=m-1;
        }
    }
    return -1;
}

int search(vector<int>& arr, int n, int k)
{
    int pivot= getPivot(arr,n);
    if(k>=arr[pivot]&&k<=arr[n-1]){
        return binarySearch(arr,pivot,n-1,k);

    }
    else{
        return binarySearch(arr,0,pivot-1,k);
    }  
}


