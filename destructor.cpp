#include<iostream>
using namespace std;
class Hero{
    
    int health;
    public:
    char level;
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
   Hero A; //static
   Hero *B=new Hero(); //dynamic
   delete B; //manually call destructor


}