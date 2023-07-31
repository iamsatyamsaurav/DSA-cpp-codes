#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int tar)
{
    int start=0;
    int end=size-1;
    while(start<=end)
    {
        //int mid=(start+end)/2;
        //to prevent integer overflow
        
        int mid=start+(end-start)/2;
        
        if(arr[mid]==tar)
        return mid;
        else if(tar>arr[mid])
        start=mid+1;
        else
        end=mid-1;
    }
    return -1;
}
int main()
{
    //elements should be in either increasing or decreasing order
    int odd[5]={1,5,6,7,8};
    int even[6]={-6,11,15,22,63,410};
    int indexOdd=binarySearch(odd,5,7);
    int indexEven=binarySearch(even,6,410);
    cout<<"The index of the target in Odd array is "<<indexOdd<<endl;
    cout<<"The index of the target in Even array is "<<indexEven<<endl;

}