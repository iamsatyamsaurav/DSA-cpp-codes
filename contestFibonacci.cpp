// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int fib(int n){
  if(n==1){
      return 0;
  }
  if(n==2){
      return 1;
  }
  if(n==3){
      return 1;
  }
  return fib(n-1)+fib(n-2);
}
int main() {
    int n;
    cin>>n;
    cout<<fib(n);
    return 0;
}