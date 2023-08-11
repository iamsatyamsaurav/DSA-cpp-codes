#include<iostream>
using namespace std;
int power(int a ,int b){
    //base case
    if(b==0)
    return 1;
    if(b==1)
    return a;
    int ans=power(a,b/2);
    if(b&1){   //if b is odd
        return a*ans*ans;
    }
    else    //if b is even
    return ans*ans;
}
int main(){
    int a,b;
    cout<<"Enter a and b resp."<<endl;
    cin>>a>>b;
    cout<<power(a,b);
}