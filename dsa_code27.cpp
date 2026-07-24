//----------------------------oop's----------------------

// #include <iostream>
// #include <string>
// using namespace std;
// class student {
    
//     public:
//     string name;
//     double* cgpaptr;
//     student(string name,double cgpa){
//         this->name = name;
//         cgpaptr = new double;
//         *cgpaptr = cgpa;
//     }
//     //distuctor
//     ~student(){
//         cout<<"hi i am discutor";
//         delete cgpaptr;

//     }

//     // student(student &obj){
//     //     this->name= obj.name;
//     //     this->cgpaptr = obj.cgpaptr;

//     }
//     void getInfo(){
//         cout<<"name : "<<name<<endl;
//         cout<<"cgpa : "<<*cgpaptr<<endl;
//     }
// };


// int main(){
//     student s1("rahul kumar",8.05);
//     student s2(s1);
//     (s2.cgpaptr) = 9.2;
//     s1.getInfo()
//     s2.getInfo();
    
//     return 0;
// }