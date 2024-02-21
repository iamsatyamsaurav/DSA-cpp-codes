#include<bits/stdc++.h>
int findMax(vector<int>&v){
    int maxi=INT_MIN;
    for(int i=0;i<v.size();i++){
        maxi=max(maxi,v[i]);
    }
    return maxi;
}
long long findTime(vector<int>&v,int k){
    long long total=0;
    for(int i=0;i<v.size();i++){
        total+=ceil(v[i]/(double)k);
    }
    return total;
}
int minimumRateToEatBananas(vector<int> v, int h) {
    int s=1;
    int e=findMax(v);
    // int ans=INT_MAX;
    while(s<=e){
        int mid=s+(e-s)/2;
        long long timeTaken=findTime(v,mid);
        if(timeTaken<=h){
            e=mid-1;
            // ans=mid;
        }
        else{
            s=mid+1;
        }
    }
    return s;
}

