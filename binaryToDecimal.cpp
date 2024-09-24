#include <bits/stdc++.h>

int convert(int N,string &str)
{
    int num=0;
    int powerOfTwo=1;
   for(int i=N-1;i>=0;i--){
       if(str[i]=='1'){
           num=num+powerOfTwo;
       }
       powerOfTwo=powerOfTwo*2;

   }
   return num;
}