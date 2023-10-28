
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num;
    int flag=0;
    cout<<"Enter the number"<<endl;
    cin>>num;
    for(int i=0; i<31; i++){
        if(num==pow(2,i))
        {
            cout<<"Yes"<<endl;
            flag=1;
            break;
        }
        
    }
    if(flag==0)
    {
        cout<<"No"<<endl;
    }

}