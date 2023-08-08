#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter the row size "<<endl;
    cin>>row;
    cout<<"Enter the col size "<<endl;
    cin>>col;

    //creating a two d array
    int **arr=new int*[row];
    for(int i=0;i<row;i++){
        arr[i]=new int[col];
    }

    cout<<"now enter the elements "<<endl;
    //taking input
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"the array you created is : "<<endl;
    //printing two d array
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<"           ";
        } 
        cout<<endl;
    }

    //releasing the heap memory
    for(int i=0;i<row;i++){
        delete []arr[i];
    }
    delete []arr;
    

}