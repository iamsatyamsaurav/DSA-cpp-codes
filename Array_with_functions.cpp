
#include<iostream>
using namespace std;

void printArray(int array[],int size){
    int i;
    for(i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
}
int main()
{
    int satyam[10]={2,4};
   printArray(satyam,15); 
   int size= sizeof(satyam)/sizeof(int);
   cout<<size;
   int minimum=min(2,10);
   cout<<minimum;
}