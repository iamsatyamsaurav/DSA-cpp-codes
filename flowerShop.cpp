#include<bits/stdc++.h>
using namespace std;
void f(vector<int>&arr){
    int n=arr.size();
    sort(arr.begin(),arr.end());
    int range=arr[0]+4;
    int count=1;
    for(int i=0;i<n;i++){
        if(arr[i]<=range){
            continue;
        }
        else{
            range=arr[i]+4;
            count++;
        }
    }
    cout<<count<<endl;
}
int main()
{
    //Write your code here
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    f(arr);
    return 0;
}