#include<iostream>
#include<climits>
using namespace std;
int maxRowSum(int arr[][3],int row,int col){
    int sum=0;
    int max=INT_MIN,maxRowIndex=-1;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            sum=sum+arr[i][j];
        }
        if(sum>max){
            max=sum;
            maxRowIndex=i;
        }
        sum=0;
    }
    cout<<"the maximum row sum is "<<max<<endl;
    return maxRowIndex;
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

    int ans=maxRowSum(arr,3,3);
    cout<<"The maximum sum row index is "<<ans<<endl;
    

}