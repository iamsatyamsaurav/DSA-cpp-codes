#include<iostream>
using namespace std;
void reachHome(int src, int dest){
    cout<<"source "<<src<<" destination "<<dest<<endl;
    if(src==dest){
        cout<<"destination reached "<<endl;
        return;
    }   
    src++;
    reachHome(src,dest);
    return;
}
int main(){
    int src=1;
    int dest=10;
    reachHome(src,dest);
    return 0;
}