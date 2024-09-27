// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int>arr{-5,2,3,5,6,8,-2,-95,0};
    int prod=1;
    int countZero=0;
    int countNegative=0;
    vector<int>negatives;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>0){
            prod=prod*arr[i];
        }
        else if(arr[i]<0){
            countNegative++;
            negatives.push_back(arr[i]);
        }
        else {
            countZero++;
        }
        
    }
    if(countZero==arr.size()){
        cout<<0<<endl;
        return 0;
    } 
    sort(negatives.begin(),negatives.end());
    if(countNegative&1){
        //odd negatives
        for(int i=0;i<negatives.size()-1;i++){
            prod=prod*negatives[i];
        }
        
    }
    else{
        for(int i=0;i<negatives.size();i++){
            prod=prod*negatives[i];
        }
    }
    if(arr.size()==2 && ((arr[0]<0 && arr[1]==0)|| (arr[0]==0 && arr[1]<0))){
        cout<<0<<endl;
        return 0;
    }
    cout<<prod<<endl;
    
    

    return 0;
}