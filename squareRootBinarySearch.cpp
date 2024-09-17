#include<iostream>
using namespace std;
int bsRootInteger(int n){
        int s=0,e=n;
        long long int ans=-1;
        while(s<=e){
            long long int mid=s+(e-s)/2;
            long long int square=mid*mid;
            if(square<n){
                ans=mid;
                s=mid+1;
            }
            else if(square>n){
                e=mid-1;
            }
            else{
                return mid;
            }
        }
        return ans;
    }

    //Now fiding the decimal part also:

    
    double finalRoot(int tempSol,int n,int p){
        double factor=1; double ans=tempSol;
        for(int i=0;i<p;i++){
            factor=factor/10;
            for(double j=ans;j*j<n;j=j+factor){
                ans=j;
            }
        }
        return ans;
    }
int main(){
        int n,p;
        cout<<"Enter the number :"<<endl;
        cin>>n;
        cout<<"Enter the precision to which you want the ans :"<<endl;
        cin>>p;
        int tempSol=bsRootInteger(n);
        cout<<"The sqaure root is "<<finalRoot(tempSol,n,p);
}