#include<iostream>
using namespace std;
int findSum(int *arr,int n){
    int s=0;
    for(int i=0;i<n;i++){
        s=s+arr[i];
    }
    return s;
}
int main(){
    // char *ch = new char;
    // cout<<ch<<endl;
    // delete ch;
    // cout<<ch<<endl;/


    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=findSum(arr,n);
    cout<<"THE SUM IS "<<ans<<endl;

    // delete []arr;

}