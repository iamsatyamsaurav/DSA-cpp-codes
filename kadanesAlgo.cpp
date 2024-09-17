#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int kadanes(vector<int> &arr){
    int n=arr.size();
    int sum=0;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum>maxi){
            maxi=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    return maxi;
}
int main(){
    vector<int>arr{10,-6,-4,1,7,1,12};
    cout<<kadanes(arr);
}