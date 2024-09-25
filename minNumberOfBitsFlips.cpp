#include <bits/stdc++.h> 
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
int numberOfFlips(int a, int b)
{
   int ans=a^b;
   return countBits(ans);
}