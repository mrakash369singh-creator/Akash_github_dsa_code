#include <iostream>
#include <string>
using namespace std;

class person {
    public:
    string name;
    int age;
    person(string name, int age){
        this->name = name;
        this->age = age;
    }

    person (){
        cout<<"parent constructor...\n";

    }
};
class student : public person {
    public:
    int rollno;

    student(string name, int age, int rollno) : person(name, age){
        this->rollno = rollno;
    }

    void getInfo(){
        cout<<"name : "<<name<<endl;
        cout<<"rollno : "<<rollno<<endl;

    }

};

int main(){
    student s1("rahul",21,1234);
    // s1.name= "rahul";
    // s1.age = 21;
    // s1.rollno = 1234;
    s1.getInfo();


    return 0;
}