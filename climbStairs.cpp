#include <bits/stdc++.h> 
int countDistinctWays(int nStairs) {
    //base case
    if(nStairs<0)
    return 0;
    if(nStairs==0)
    return 1;

    //Recursive relation
    // int ans=countDistinctWays(nStairs-1)+countDistinctWays(nStairs-2);
    // return ans;

    return countDistinctWays(nStairs-1)+countDistinctWays(nStairs-2);

}

 //time limit is exceeded as this question is
 //designed to be solved by dynamic programming