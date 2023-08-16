#include<iostream>
using namespace std;
int firstOcc(int arr[],int size, int key){
    int start=0,end=size-1;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}
int lastOcc(int arr[],int size, int key){
    int start=0,end=size-1;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}
int main(){
    int odd[5]={1,2,2,2,3};
    int even[8]={0,1,2,3,5,5,5,5};
    cout<<"The first Occurence of 2 in odd array is at index "<<firstOcc(odd, 5, 2)<<endl;
    cout<<"The last Occurence of 2 in odd array is at index "<<lastOcc(odd, 5, 2)<<endl;
    cout<<"The first Occurence of 5 in even array is at index "<<firstOcc(even, 8, 5)<<endl;
    cout<<"The last Occurence of 5 in even array is at index "<<lastOcc(even, 8, 5)<<endl;
    cout<<"Total occurence of 2 in odd array is "<<lastOcc(odd, 5, 2)-firstOcc(odd, 5, 2)+1<<endl;
}