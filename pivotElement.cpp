//pivot element means the minimum element
//we can also find the pivot element using linear search but the time complexity will be more than
//binary search
#include<iostream>
using namespace std;
int findPivot(int arr[],int size){
    int s=0,e=size-1;
    while(s<e){
        int mid=s+(e-s)/2;
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
    }
    return e;
}
int main(){

    int arr[5]={7,9,1,2,3};
    int index=findPivot(arr, 5);
    cout<<"The pivot element is at index "<<index<<endl;
}