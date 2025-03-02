#include<bits/stdc++.h>
int kDistinctChars(int k, string &str)
{

    //Optimal solution
    int n=str.length();
    int l=0,r=0,maxLen=0;
    unordered_map<char,int>mp;
    while(r<n){
        mp[str[r]]++;
        
        //window shrink
        if(mp.size()>k){
            mp[str[l]]--;
            if(mp[str[l]]==0){
                mp.erase(str[l]);
            }
            l++;
        }
        
        //window expand
        if(mp.size()<=k){
            int len=r-l+1;
            maxLen=max(len,maxLen);
        }
        r++;
    }
    return maxLen;

    // //Better solution
    // int n=str.length();
    // int l=0,r=0,maxLen=0;
    // unordered_map<char,int>mp;
    // while(r<n){
    //     mp[str[r]]++;
        
    //     //window shrink
    //     while(mp.size()>k){
    //         mp[str[l]]--;
    //         if(mp[str[l]]==0){
    //             mp.erase(str[l]);
    //         }
    //         l++;
    //     }
        
    //     //window expand
    //     if(mp.size()<=k){
    //         int len=r-l+1;
    //         maxLen=max(len,maxLen);
    //     }
    //     r++;
    // }
    // return maxLen;


    //Brute force
    // int n=str.length();
    // int maxLen=0;
    // for(int i=0;i<n;i++){
    //     set<char>s;
    //     for(int j=i;j<n;j++){
    //         s.insert(str[j]);
    //         if(s.size()>k){
    //             break;
    //         }
    //         if(s.size()<=k){
    //             int len=j-i+1;
    //             maxLen=max(len,maxLen);
    //         }
    //     }
    // }
    // return maxLen;
}


