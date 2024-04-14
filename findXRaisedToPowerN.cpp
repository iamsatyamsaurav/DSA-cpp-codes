double myPow(double x, int n) {
    if(n==0){
        return 1;
    }
    if(n==1){
        return x;
    }
    if (n < 0) {
        x = 1 / x;
        n = -n;
    }

    double ans=pow(x,n/2);
    if(n&1){
        return ans*ans*x;
    }
    else{
        return  ans*ans;
    }
    // return x*(myPow(x,n-1));
}