#include<iostream>
using namespace std;
//double pointer approach
void merge(int arr1[],int n,int arr2[],int m,int arr3[]){
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
            // i++; 
            // k++;
        }
        else{
            arr3[k++]=arr2[j++];
            // j++;
            // k++;
        }
    }
    while(i<n){
        arr3[k++]=arr1[i++];
        // i++;
        // k++;
    }
    while(j<m){
        arr3[k++]=arr2[j++];
        // k++;
        // j++;
    }
}
void print(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){

    int arr1[6]={1,2,3,6,8,10};
    int arr2[3]={3,5,9};
    int arr3[9]={0};
    merge(arr1,6,arr2,3,arr3);
    print(arr3,9);

}



//leetcode

// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

//         for(int i=m,j=0;j<n;j++){
//             nums1[i]=nums2[j];
//             i++;
//         }
//         sort(nums1.begin(),nums1.end());
//   }
// };