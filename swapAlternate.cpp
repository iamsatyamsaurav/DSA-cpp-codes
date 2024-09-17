#include<iostream>
using namespace std;
void swapAlternate(int array[],int size){
    for(int i=0; i<size; i+=2)
    {
        if(i+1<size)
        {
             swap(array[i],array[i+1]);

        }
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
    int brr[5]={5,4,3,0,-6};
    swapAlternate(arr,6);
    swapAlternate(brr,5);
    printArray(arr,6);
    printArray(brr,5);

}    