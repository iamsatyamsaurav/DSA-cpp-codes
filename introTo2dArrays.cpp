#include<iostream>
using namespace std;
//Linear search: time complexity=O(row*col);
bool isPresent(int arr[][4],int tar,int row,int col){
    for(int i=0;i<row;i++){
        for(int j=-0;j<col;j++){
            if(arr[i][j]==tar){
                return 1;
            }
        }
    }
    return 0;
}
int main(){
    int arr[3][4];
    cout<<"Enter the elemnts in the array"<<endl;
    //Taking row wise input:
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }


    //Taking column wise input:
    // for(int j=0;j<4;j++){
    //     for(int i=0;i<3;i++){
    //         cin>>arr[i][j];
    //     }
    // }

    //Printing the 2d array:
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }  

    int tar;
    cout<<"Enter the target element "<<endl;
    cin>>tar;
    if(isPresent(arr,tar,3,4)){
        cout<<"element found"<<endl;
    } 
    else{
        cout<<"element not found"<<endl;
    } 
}

