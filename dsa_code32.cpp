#include <iostream>
#include <string>
using namespace std;

class student{
public:
string name;
student(){
    cout<<"non-parematrised\n";

}
student(string name){
    this->name = name;
    cout<<"parematrised\n";
}

};
int main(){
    student s1;
   
    student s2("tonyyy");
    return 0;

}