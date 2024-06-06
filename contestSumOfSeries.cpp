#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of terms"<<endl;
    cin>>n;
    int mul=1;
    int sum=0;
    
    for(int i=1;i<=n;i++){
        sum=sum+(mul*i);
        mul=(mul*10)+1;
    }
    cout<<sum;
}