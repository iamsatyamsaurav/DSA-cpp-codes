#include<iostream>
using namespace std;
void fibonnaci(int n){
    int first=0,second=1;
    cout<<first<<" "<<second<<" ";
    for(int i=0;i<n-2;i++){
        int next=first+second;
        cout<<next<<" ";
        first=second;
        second=next;
    }
    return;
}
int main(){
    int n;
    cout<<"Enter the no. of fibonnaci terms you want "<<endl;
    cin>>n;
    fibonnaci(n);
    return 0;
}