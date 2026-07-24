//----------------------------oop's----------------------

#include <iostream>
#include <string>
using namespace std;

class Teacher{
private:
    double salary;

public:
    string name;
    string dept;
    string subject;
    // double salary;

// non perametrise construstor
    Teacher(){
        cout<<"hey i am constructor \n";
        dept = "ECE";
    }

    // paremetrise constructor
    Teacher(string name, string dept, string subject,double sal){
        this -> name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = sal;
    }
    // copy constructor
    Teacher(Teacher & orgobj){
        this->name = orgobj.name;
        this->dept = orgobj.dept;
        this->subject = orgobj.subject;
        this->salary = orgobj.salary;

    };
    // string name;
    // string dept;
    // string subject;
    // // double salary;

    void changeDept(string newDept){
        dept = newDept;

    }
    //setter
    void setSalary(double s){
        salary = s;
    }
    //getter
    double getSalary(){
        return salary;
    }
};
class Account {
    private:
    double balance;
    string password;

    public:
    string username;
    string accountID;
    

};

int main(){
    Teacher t1;                    // constructur call
   // Teacher t2;
    t1.name = "akash singh";
    t1.subject = "c++";
  //  t1.dept = "ECE";
  //  t1.salary = 250000;       -> gives error because this is private
    
    cout<<t1.name<<endl;
    Teacher t2(t1);
    //t2.getinfo();


    // Teacher t2;
    // Teacher t3;
    // Teacher t4;
    
    return 0;
}