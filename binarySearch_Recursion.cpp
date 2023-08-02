#include<iostream>
using namespace std;
bool binarySearch(int *arr,int s, int e,int key){
    //base case
    if(s>e){
        return 0;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]==key)
    return 1;
    if(arr[mid]<key)
    return binarySearch(arr,mid+1,e,key);
    else
    return binarySearch(arr,s,mid-1,key);

}
int main(){
    int arr[6]={1,4,5,10,12,40};
    int key=2;
    bool ans=binarySearch(arr,0,5,key);
    if(ans){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}