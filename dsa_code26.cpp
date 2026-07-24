//----------------------------oop's----------------------

#include <iostream>
#include <string>
using namespace std;
class student {
    public:
    string name;
    double cgpa;
    student(string name,double cgpa){
        this->name = name;
        this->cgpa = cgpa;
    }
    student(student &obj){
        this->name= obj.name;
        this->cgpa = obj.cgpa;

    }
    void getInfo(){
        cout<<"name : "<<name<<endl;
        cout<<"cgpa : "<<cgpa<<endl;
    }
};


int main(){
    student s1("rahul kumar",8.05);
    student s2(s1);
    s2.getInfo();
    
    return 0;
}