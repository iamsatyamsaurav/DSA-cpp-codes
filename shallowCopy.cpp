#include<iostream>
#include<string.h>
using namespace std;
class Hero{
    
    int health;
    public:
    char level;
    char *name;
    Hero(){
        name=new char[20];  //this is preffered practice to use heap memory for such array
    }
    Hero(int health){
        this->health=health;
        cout<<"inside parameterised constructor"<<endl;
    }
    Hero(int health,char level){
        this->health=health;
        this->level=level;
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
    void setName(char name[]){
        strcpy(this->name,name);
    }
    void print(){
        cout<<endl<<"[Name: "<<this->name<<", "<<"Health: "<<this->health<<", "<<"Level: "<<this->level<<"]"<<endl<<endl;  
    }
};
int main(){
    Hero A;
    A.setHealth(10);
    A.setLevel('V');
    char name[20]="Babbar";
    A.setName(name);
    A.print();
    Hero B(A);   //using default constructor for shallow copy
    B.print();
    A.name[0]='G';
    A.print();
    B.print();

}