class Solution {
public:
    int fib(int n) {
        //USING RECURSION
        // if(n==0)
        // return 0;
        // if(n==1)
        // return 1;
        // return fib(n-1)+fib(n-2);

        //WITHOUT RECURSION
        if(n==0)
        return 0;
        if(n==1)
        return 1;
        int zero=0,first=1,next=0;
        for(int i=0;i<n-1;i++){
            next=first+zero;
            zero=first;
            first=next;
        }
        return next;
    }
};