#include<iostream>
using namespace std;
void reverse(string &s,int i, int j){
    //base case
    if(i>=j)
    return;
    swap(s[i],s[j]);
    i++;
    j--;
    reverse(s,i,j);
    return;
}
int main(){
    string s="satyam";
    int start=0;
    int end=s.length()-1;
    reverse(s,start,end);
    cout<<s<<endl;
}