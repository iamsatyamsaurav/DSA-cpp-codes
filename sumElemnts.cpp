#include<iostream>
using namespace std;
int sumElements(int arr[],int size){
    int sum=0;
    for(int i=0; i<size; i++){
        sum=sum+arr[i];
    }

    return sum;
}
int main(){
    
    int size;
    cout<<"Enter the no of elements"<<endl;
    cin>>size;
    int array[100];
    cout<<"Enter the elements"<<endl;
    for(int i=0; i<size; i++){
        cin>>array[i];
    }

    cout<<"The sum of elements is "<<sumElements(array,size);

}