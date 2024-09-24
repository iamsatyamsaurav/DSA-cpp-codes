bool isPowerOfTwo(int n)
{	
    // Write your code here.
    if((n & (n-1))==0) return true;
    else return false;
}