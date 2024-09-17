#include<iostream>
using namespace std;
int sum=0;
int Sum(int arr[],int size){

    if(size==0)  //base case
    return sum;
    sum=sum+arr[0];
    int ans=Sum(arr+1,size-1);
    return ans;
}
int main(){
    int arr[5]={10,10,10,10,10};
    int size=5;
    int ans=Sum(arr,size);
    cout<<"the sum is "<<ans<<endl;

 
}