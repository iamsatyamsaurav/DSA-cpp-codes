#include<iostream>
using namespace std;

reverseArray(int array[],int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        swap(array[start],array[end]);
        start++;
        end--;
    }
}
printArray(int array[],int size){
    for(int i=0; i<size; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    

}

int main(){
    int arr[6]={1,2,3,4,5,6};
    int brr[5]={0,-2,-50,4,5};
    reverseArray(arr,6);
    reverseArray(brr,5);
    printArray(arr,6);
    printArray(brr,5);
}