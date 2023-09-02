#include<iostream>
using namespace std;
bool search(int *arr,int size,int key){
    if(size==0)
    return 0;   //base case
    if(arr[0]==key)
    return 1;
    else{
        bool isFound = search(arr+1,size-1,key);
        return isFound;
    }
}
int main(){
    int arr[5]={3,5,1,2,6};
    cout<<"Enter the key"<<endl;
    int key;
    cin>>key;
    bool ans=search(arr,5,key);
    if(ans){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}