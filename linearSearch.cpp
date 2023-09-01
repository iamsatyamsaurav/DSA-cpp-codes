#include<iostream>
using namespace std;

bool searchLinear(int arr[],int size,int key){
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){

    int array[10]={1,2,-3,4,5,6,7,-8,90,1001};
    cout<<"Enter the element to be searched"<<endl;
    int key;
    cin>>key;
    bool found=searchLinear(array,10,key);
    if(found){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Absent"<<endl;
    }
}