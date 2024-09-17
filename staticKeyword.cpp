#include<iostream>
using namespace std;
class Hero{
    
    int health;
    public:
    char level;
    int static timeToLive; //static data member
    Hero(){
        cout<<"constructor called"<<endl;
    }
    Hero(int health){
        this->health=health;
        cout<<"inside parameterised constructor"<<endl;
    }
    Hero(int health,char level){
        this->health=health;
        this->level=level;
    }
    //custom copy constructor
    Hero(Hero &temp){
        cout<<"Custom copy constructor called"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }
    //destructor
    ~Hero(){
        cout<<"destructor called"<<endl;
    }
    //static function
    static int random(){
        return timeToLive;
    }
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
int Hero::timeToLive=10;
int main(){
  
    cout<<Hero::timeToLive<<endl;
    // Hero a;
    // cout<<a.timeToLive<<endl;  //works but it is not preffered as static data members belongs to class,not object
    cout<<Hero::random()<<endl;
}