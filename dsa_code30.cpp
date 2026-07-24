#include <iostream>
#include <string>
using namespace std;

// class person {
//     public:
//     string name;
//     int age;
    
    
// };
class student {
    public:
    string name;
    int rollno;

    

};
class Teacher{
    public:
    string subject;
    double salary;

};
class TA : public student,public Teacher{
    
};

int main(){
    TA t1;
    t1.name = "toni stark";
    t1.subject = "ece";
    cout<<t1.name<<endl;
    cout<<t1.subject<<endl;
    return 0;
}