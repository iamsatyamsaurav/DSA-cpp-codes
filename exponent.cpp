#include<iostream>
using namespace std;
int findExponent(int a, int b){
    int res=1;
    for(int i=0;i<b;i++){
        res=res*a;
    }
    return res;
}
int main(){
    int a;
    int b;
    cout<<"Enter the base"<<endl;
    cin>>a;
    cout<<"Enter the power"<<endl;
    cin>>b;
    int ans=findExponent(a,b);
    cout<<"The required ans is "<<ans<<endl;
}