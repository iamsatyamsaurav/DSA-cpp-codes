#include<iostream>
using namespace std;
int main(){
    int *p=new int;
    *p=5;
    cout<<*p<<endl;
    int *q=p;
    cout<<*q<<endl;
    delete q;
    cout<<*p<<endl;
    cout<<*q<<endl;

}