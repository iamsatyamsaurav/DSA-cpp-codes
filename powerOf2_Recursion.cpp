#include<iostream>
using namespace std;
int power(int n){
    if(n==0)
    return 1; //base case
    return 2*power(n-1); //recursive relation
}
int main(){
    int n;
    cout<<"Enter the power of two"<<endl;
    cin>>n;
    int ans=power(n);
    cout<<ans<<endl;
}