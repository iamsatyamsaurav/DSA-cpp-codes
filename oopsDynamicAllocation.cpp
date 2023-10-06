#include<iostream>
using namespace std;
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
    // Hero h1; //static allocation

    //dynamic allocation
    Hero *h=new Hero;
    // (*h).level='S';
    // cout<<(*h).level<<endl;
    // cout<<h->level<<endl;
    h->setLevel('D');
    (*h).setHealth(150);
    cout<<(*h).getLevel()<<endl;
    cout<<h->getHealth()<<endl;
}