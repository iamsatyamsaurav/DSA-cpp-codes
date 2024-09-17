#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<stack>
#include<queue> //includes priority queue
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){

   //Algorithms
  
    vector<int> v;
    v.push_back(10);
    v.push_back(1);
    v.push_back(8);
    v.push_back(2);
    v.push_back(-3);

   // cout<<binary_search(v.begin(),v.end(),80)<<endl;
    int a=3,b=5;
    // cout<<max(a,b);
    // swap(a,b);
    // cout<<a<<b;
    // string s="abcdef";
    // reverse(s.begin(),s.begin()+4);
    // cout<<s;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    // rotate(v.begin(),v.begin()+3,v.end());
    sort(v.begin(),v.begin()+2);
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    


    // map<int,string>m;
    // m[10]="satyam";
    // m[1]="aman";
    // m[7]="ritesh";
    // m.insert({-2,"mukul"});
    // map<int,string>::iterator itr=m.find(10);
    
    // for(auto i:m){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    // cout<<endl;
    
    
    // set<int>s;
    // s.insert(10);
    // s.insert(5);
    // s.insert(-1);
    // s.insert(5);
    // s.insert(100);
    // cout<<s.size()<<endl;
    // cout<<s.empty()<<endl;
    // s.erase(s.begin());
    // for(int i:s){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // // cout<<s.count(50);
    // set<int>::iterator itr=s.find(5);
    // cout<<*itr;


    //Now impelmenting priority queue
    // priority_queue<int>p; //max heap
    // priority_queue<int,vector<int>,greater<int>>q;  //min heap
    // p.push(1);
    // p.push(10);
    // p.push(-6);
    // p.push(15);

    // q.push(1);
    // q.push(10);
    // q.push(-6);
    // q.push(15);
    // cout<<p.size();
    // // cout<<p.empty();
    // int n=p.size();
    // for(int i=0;i<n;i++){
    //     cout<<p.top()<<" ";
    //     p.pop();
    // }
    // cout<<endl;
    // int m=q.size();
    // for(int i=0;i<m;i++){
    //     cout<<q.top()<<" ";
    //     q.pop();
    // }
    


 
    // stack<int>s;
    // queue<int> s;
    // s.push(5);
    // s.push(2);
    // s.push(-15);
    
    // cout<<s.front();
    // cout<<s.size();
    // cout<<s.empty();
   
    // cout<<s.empty();
    // cout<<s.top();
    // for(int i:s){
    //     cout<<i<<" ";
    // }


    // list<int>l(5,13);
    // l.push_front(9);
    // l.push_back(4);
    // l.push_back(5);
    // l.push_back(0);
    // l.pop_back();
    // l.pop_front();
    // cout<<l.capacity();

    // for(auto i:l){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // l.erase(l.begin());
    // cout<<l.size()<<endl;
    // cout<<l.front()<<endl;
    // cout<<l.back()<<endl;
    // list<int>p(l);
    // for(auto i:p){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // cout<<l.empty()<<endl;

    // array<int,5> a={1,5,0,-6,7};
    // cout<<a.size()<<endl;
    // cout<<a.at(3)<<endl;
    // cout<<a.front()<<endl;
    // cout<<a.back()<<endl;
    // cout<<a.empty()<<endl;

    // vector<int> v;
    // cout<<v.capacity()<<endl;
    // v.push_back(1);
    // cout<<v.capacity()<<endl;
    // v.push_back(-5);
    // cout<<v.capacity()<<endl;
    // v.push_back(10);
    // cout<<v.capacity()<<endl;
    // v.push_back(96);
    // cout<<v.capacity()<<endl;
    // v.push_back(15);
    // cout<<v.capacity()<<endl;
    // cout<<v.size()<<endl;
    // v.pop_back();
    // cout<<v.capacity()<<endl;
    // cout<<v.size()<<endl;
    
    // for(int i:v){
    //     cout<<i<<" ";
    // }
    //  cout<<endl;
    // cout<<v.at(1)<<endl;
    // cout<<v.front()<<endl;
    // cout<<v.back()<<endl;
    // cout<<v.empty()<<endl;

    // vector<int>p(v);
    // for(int i:p){
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // vector<int>k(5,-6565);
    // for(int i:k){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // cout<<k.size()<<endl;
    // cout<<k.capacity()<<endl;

    // deque<int>d;
    // d.push_front(9);
    // d.push_back(4);
    // d.push_back(5);
    // d.push_back(0);
    // cout<<d.at(2)<<endl;
    
    // d.pop_back();
    // d.pop_front();
    // for(int i:d){
    //     cout<<i<" "; 
    // }
    // cout<<endl;
    // cout<<d.at(0)<<endl;
    // cout<<d.size()<<endl;
    // cout<<d.empty()<<endl;
    // cout<<d.front()<<endl;
    // cout<<d.back()<<endl;
    // for(int i:d){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // d.erase(d.begin()+1);
    // cout<<d.size()<<endl;
    // deque<int>d(5,5);
    // d.push_front(9);
    // deque<int>p(d);
    // for(int i:p){
    //     cout<<i<<" ";
    // }




    

    


}