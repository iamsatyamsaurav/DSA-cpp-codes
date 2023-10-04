#include<iostream>
// #include "Hero.cpp" 
using namespace std;

//EMPTY CLASS:

// class Hero{
// //    int health;
// };


//getter and setter
class Hero{
    
    int health;
    public:
    char level;
   
    char getLevel(){
        return level;
    }
    void setLevel(char ch){
        level=ch;
    }
    int getHealth(){
        return health;
    }
    void setHealth(int h){
        health=h;
    }
};
int main(){
    // Hero h1;
    // // cout<<sizeof(h1)<<endl;
    // h1.health=70;
    // h1.level='A';
    // cout<<h1.health<<endl;
    // cout<<h1.level<<endl;
    Hero sam;
    // sam.health=70;
    sam.level='b';
    // cout<<sam.health<<endl;
    // cout<<sam.level<<endl;
    sam.setLevel('c');
    cout<<sam.getLevel()<<endl;
    sam.setHealth(100);
    cout<<sam.getHealth()<<endl;



}