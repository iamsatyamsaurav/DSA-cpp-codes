#include<iostream>
using namespace std;
void print(int n){
    //TAIL RECURSION
    // if(n==0) //base case
    // return;
    // cout<<n<<" "; //processing
    // print(n-1);  // recursive relation

    //HEAD RECURSION
    if(n==0) //base case
    return;
    print(n-1);  // recursive relation
    cout<<n<<" ";
    return; //processing

}
int main(){
    int n;
    cin>>n;
    print(n);
    return 0;
}