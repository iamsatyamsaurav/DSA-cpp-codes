#include<iostream>
using namespace std;
//GLOBAL VARIABLES
// int score=5;
// void a(int i){
//     score=9;
//     cout<<score<<endl;
// }
// void b(int i){
//     cout<<score<<endl;
// }

//INLINE FUNCTION
// inline int getMax(int &a,int &b){
//     return (a>b)?a:b;
// }

//DEFAULT ARGUMENT
void print(int arr[],int size=3,int start=0){
    for(int i=start;i<size;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
//     int i=2;
//     cout<<score<<endl;
//     a(i);
//     b(i);
    // int i=5;
    // {
    //     int i=2;
    //     cout<<i<<endl;
    // }
    // cout<<i<<endl;

    //FOR INLINE FUNCTION
    // int a=1;
    // int b=2;
    // int ans = getMax(a,b);
    // cout<<ans<<endl;

    //FOR DEFAULT ARGUMENT
    int arr[5]={1,2,3,4,5};
    int size=5;
    print(arr);

    // const int i=5;
    // i++;
    // cout<<i<<endl;
}
