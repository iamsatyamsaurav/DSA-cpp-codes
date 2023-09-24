#include <iostream>
using namespace std;
class Human{
    private:
    int age;
    public:
    int height;
    void setAge(int age){
        this->age=age;
    }
    void setHeight(int height){
        this->height=height;
    }
    int getAge(){
        return this->age;
    }
    int getHeight(){
        return this->height;
    }
    void sleep(){
        cout<<"humans do sleep"<<endl;
    }
};
class Male:public Human{
    public:
    void funMale(){
        cout<<"Male do cry"<<endl;
    }
};
int main(){
    Human hanish;
    hanish.setAge(10);
    cout<<hanish.getAge()<<endl;
    hanish.sleep();
    Male satyam;
    satyam.funMale();
    satyam.setHeight(168);
    cout<<satyam.height<<endl;
    satyam.setAge(21);
    cout<<satyam.getAge();

}