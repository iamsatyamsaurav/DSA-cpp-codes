#include<iostream>
using namespace std;
void swap(char *x, char*y){
    chat *t=x;
    x=y;
    y=t;
}
int main(){

    char *x="ninjasquiz";
    char *y="codingninjas";
    char *t;
    swap(x,y);
    cout<<x<<" "<<y;
    t=x;
    x=y;
    y=t;
    cout<<" "<<x<<" "<<y;
    return 0;
    // int *p=0;
    // int a=10;
    // *p=a;          -------------> ERROR
    // cout<<*p<<endl;


    // char ch='a';
    // cout<<ch<<endl;
    // int i=1;
    // ch=ch+i;
    // cout<<ch<<endl;

    // char st[]="ABCD";
    // for(int i=0; st[i]!='\0'; i++){
    //     cout<<st[i]<<*(st)+i<<*(i+st)<<i[st];
    // }
    // return 0;


    // int ***r, **q, *p, i=8;
    // p=&i;
    // (*p)++;
    // q=&p;
    // (**q)++;
    // r=&q;
    // cout<<*p<<" "<<**q<<" "<<***r;
    // return 0;


  
}