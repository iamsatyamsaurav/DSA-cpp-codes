#include<iostream>
using namespace std;
void rotate(int *arr,int k,int size){
    int arr2[size];
    
    for(int i=0;i<size;i++){
        arr2[(i+k)%size]=arr[i];
    }
    for(int i=0;i<size;i++){
        cout<<arr2[i]<<" ";
    }
}

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<"Enter the value of k by which you want to rotate"<<endl;
    int k;
    cin>>k;
    rotate(arr,k,10);
   }