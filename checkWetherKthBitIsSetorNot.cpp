bool isKthBitSet(int n, int k)
{
    k=k-1;
    if((n &(1<<k)) !=0){
        return true;;
    }
    else{
        return false;
    }
}