string read(int n, vector<int> book, int target)
{
    //two pointer 
    
    int i=0,j=n-1;
    sort(book.begin(),book.end());
    while(i<j){
        if(book[i]+book[j]==target)
        return "YES";
        else if(book[i]+book[j]>target)
        j--;
        else
        i++;
    }
    return "NO";
}
