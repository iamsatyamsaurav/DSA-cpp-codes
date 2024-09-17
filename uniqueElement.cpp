#include<iostream>
using namespace std;
int unique(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main()
{
  int arr[7]={1,5,4,1,5,4,18};
  int res=unique(arr,7);
  cout<<res<<endl;

}