#include<iostream>
using namespace std;
int numOfOnes(int arr[],int size){
    int count=0;
    for(int i=size-1;i>=0;i--){
        if(arr[i]==1){
            count++;
        }
        else{
            break;
        }
    }
    return count;
}
int main(){
    int arr[10]={0,0,0,0,1,1,1,1,1,1};
    int size=10;
    cout<<"The number of ones in the given array is: "<<numOfOnes(arr,size)<<endl;
}