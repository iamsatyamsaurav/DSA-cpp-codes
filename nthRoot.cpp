#include<bits/stdc++.h>
int NthRoot(int n, int m) {
   int s=1,e=m;
  
  
   while(s<=e){
     long long temp=1;
     long long mid=s+(e-s)/2;
     for(int i=0;i<n;i++){
       temp=temp*mid;
       if(temp>m){
         e=mid-1;
         break;
       }
     }
     if(temp==m){
       return mid;
     }
     else if(temp<m){
      
       s=mid+1;
     }
     
    
   }
   return -1;
}
// #include <bits/stdc++.h>

// int NthRoot(int n, int m) {

//   int l = 1;

//   int h = m;

//   while(l<=h){

//       long long mid = (l+h)/2;

//       if(pow(mid,n)==m){

//          return mid;

//       }

 

//       if(pow(mid,n)>m){

//           h = mid-1;

 

//       }

//       else{

//           l = mid+1;

//       }

//   }

//   return -1;

 

// }

