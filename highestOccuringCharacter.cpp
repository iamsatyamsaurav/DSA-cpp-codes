#include<bits/stdc++.h>
char highestOccurringChar(char input[]) {
    map<char,int>mp;
    int n=strlen(input);
    for(int i=0;i<n;i++){
        mp[input[i]]++;
    }
    char maxChar;
    int maxCount=0;
    for(auto i:mp){
        if(i.second>maxCount){
            maxCount=i.second;
            maxChar=i.first;
        }
    }
    return maxChar;
}