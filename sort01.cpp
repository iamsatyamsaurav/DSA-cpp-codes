#include<iostream>
using namespace std;
void sortZeroone(int arr[],int size)
{
    int left=0,right=size-1;
    while(left<right)
    {
        while(arr[left]==0 )
        {
            left++;
        }
        while(arr[right]==1 )
        {
            right--;
        }
        if(left<right)
        {
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
}
void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[8]={1,1,1,0,0,1,1,0};
    sortZeroone(arr,8);
    cout<<"After sorting 0,1"<<endl; 
    printArray(arr,8);
}