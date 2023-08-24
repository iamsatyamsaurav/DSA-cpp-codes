#include<iostream>
using namespace std;
bool isSorted(int *arr,int size){
    if(size==1)  //base case
    return 1;
    if(arr[0]>arr[1])
    return 0;
    else{
        bool ans=isSorted(arr+1,size-1);
        return ans;
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    bool ans=isSorted(arr,5);
    if(ans){
        cout<<"sorted"<<endl;
    }
    else{
        cout<<"Not sorted"<<endl;
    }
}