// #include <iostream>
// #include <string>
// using namespace std;

// class A{
//     int x;
//     void incx(){
//         x=x+1;
//     }
// };
// int main(){
//     A obj1;
//     A obj2;

//     // obj1.x=100;
//     // obj2.x = 200;
//     // cout<<obj2.x<<endl;
//     // obj.incx();
//     // cout<<obj.x<<endl;
   
    
//     return 0;

// }


//----------------------------=======================--------------------------------

#include <iostream>
#include <string>
using namespace std;

class ABC{
    public:
    ABC(){
        cout<<"constructor\n";
    }
    ~ABC(){
        cout<<"desctor\n";
    }

    
};
int main(){
    if(true){
        ABC obj;
    }
    cout<<"end of main fnx\n";
    return 0;

}