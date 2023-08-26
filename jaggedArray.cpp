#include<iostream>
using namespace std;
//using dynamic memory allocation
int main(){
    int row;
    cout<<"Enter the no. of rows"<<endl;
    cin>>row;
    int *colArr=new int[row];
    cout<<"Enter the column sizes"<<endl;
    for(int i=0;i<row;i++){
        cin>>colArr[i];
    }
    int **arr=new int*[row];
    for(int i=0;i<row;i++){
        arr[i]=new int[colArr[i]];
    }
    //jagged array is created
    //now taking input in the jagged array
    cout<<"Enter the elements in the jagged array"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<colArr[i];j++){
            cin>>arr[i][j];
        }
    }
    //input has been taken , now printing the jagged array
    cout<<"The jagged array is as follows:"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<colArr[i];j++){
            cout<<arr[i][j]<<"    ";
        }
        cout<<endl;
    }
}