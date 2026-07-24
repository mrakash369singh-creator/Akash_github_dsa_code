#include <iostream>
#include <string>
using namespace std;

class person {
    public:
    string name;
    int age;
    
    
};
class student : public person {
    public:
    int rollno;

    

};
class GradStudent : public student{
    public:
    string resurchArea;

};

int main(){
    GradStudent s1;
    s1.name = "tony";
    cout<<s1.name<<endl;
    cout<<s1.resurchArea<<endl;

    return 0;
}