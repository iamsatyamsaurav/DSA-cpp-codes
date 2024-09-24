#include <bits/stdc++.h> 
#include <iostream>

using namespace std;

int countBits(int n){
    int count=0;
    while(n>0){
        int remanider=n%2;
        if(remanider==1){
            count++;
        }
        n=n>>1;

    }
    return count;

}

int main() {
    int n;
    cin >> n;
    cout<<countBits(n);
    return 0;
}