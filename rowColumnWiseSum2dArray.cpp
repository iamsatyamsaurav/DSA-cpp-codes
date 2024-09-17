#include<iostream>
using namespace std;
void sumRowWise(int arr[3][3],int row,int col){
    int sum=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            sum=sum+arr[i][j];
        }
        cout<<sum<<" ";
        sum=0;
    }
    cout<<endl;
}
void sumColWise(int arr[3][3],int row,int col){
    int sum=0;
    for(int j=0;j<col;j++){
        for(int i=0;i<row;i++){
            sum=sum+arr[i][j];
        }
        cout<<sum<<" ";
        sum=0;
    }
    cout<<endl;
}
int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"The array is :"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    sumRowWise(arr,3,3);
    sumColWise(arr,3,3);
}