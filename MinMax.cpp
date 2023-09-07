#include<iostream>
#include<climits>
using namespace std;

int getMax(int arr[], int size){
    int maximum= INT_MIN;
    for(int i=0; i<size; i++)
    {
 
        maximum=max(maximum,arr[i]);
        
        // if(arr[i]>max)
        // {
        //     max=arr[i];
        // }
    }
    return maximum;
}

int getMin(int arr[], int size){
    int minimum= INT_MAX;
    for(int i=0; i<size; i++)
    {

        minimum=min(minimum,arr[i]);
        // if(arr[i]<min)
        // {
        //     min=arr[i];
        // }
    }
    return minimum;
}

int main()
{
    int size;
    cout<<"Enter the number of elements"<<endl;
    cin>>size;
    int array[100];
    for(int i=0; i<size; i++){
        cin>>array[i];
    }

    cout<<"The min element is "<<getMin(array, size)<<endl;
    cout<<"The max element is "<<getMax(array, size)<<endl;

}