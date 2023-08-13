#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0)
    return 1;  //base case
    // int ans=n*factorial(n-1); //recursive relation
    // return ans;/

    return n*factorial(n-1);
}
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int ans= factorial(n);
    cout<<"the factorial of "<<n<<" is "<<ans<<endl;
}