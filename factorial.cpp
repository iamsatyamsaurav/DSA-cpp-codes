#include<iostream>
using namespace std;
long int factorial(int n){
    if(n==0)
    return 1;
    long int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*i;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    long int ans=factorial(n);
    cout<<ans;
}