#include<iostream>
using namespace std;
int duplicate(int arr[],int size){
    int ans=0;
    //index
    for(int i=0;i<size; i++){
        ans=ans^arr[i];
    }
    //actual elements
    for(int i=1; i<size; i++){
        ans=ans^i;
    }
    return ans;

}
int main(){
    int arr[7]={1,2,4,6,2,5,3};
    int ans=duplicate(arr,7);
    cout<<ans<<endl;

}