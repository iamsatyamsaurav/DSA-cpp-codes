#include<iostream>
using namespace std;
void update(int **p2){
    // p2=p2+1;  ------------->NO CHANGE
    // *p2=*p2+1;  --------------> YES, CHANGE IN p
    **p2=**p2+1; //---------------->YES, CHANGE IN a 
}
int main(){
//   int a=5;
//   int *p=&a;
// //   int q*=&a; --------> ERROR
//   cout<<p<<endl;
//   cout<<q<<endl;

    int a=5;
    int *p=&a;
    int **p2=&p;

    cout<<"Before"<<endl;
    cout<<a<<endl;
    cout<<p<<endl;
    cout<<p2<<endl;
    update(p2);
    cout<<"After"<<endl;
    cout<<a<<endl;
    cout<<p<<endl;
    cout<<p2<<endl;
    // cout<<a<<endl;
    // cout<<*p<<endl;
    // cout<<**p2<<endl;

    // cout<<&a<<endl;
    // cout<<p<<endl;
    // cout<<*p2<<endl;
            
}