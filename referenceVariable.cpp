#include<iostream>
using namespace std;
void update2(int &j){   //a reference variable of n is created
    j++;
}
void update1(int n){
    n++;
}
int main(){
    // int i=5;
    // int &j=i; // creating a reference variable of i
    // cout<<i<<endl;
    // cout<<j<<endl;
    // i++;
    // cout<<i<<endl;
    // cout<<j<<endl;
    // j++;
    // cout<<i<<endl;
    // cout<<j<<endl;

    int n=5;
    cout<<"Before "<<n<<endl;
    update2(n);
    cout<<"After "<<n<<endl;

    
}