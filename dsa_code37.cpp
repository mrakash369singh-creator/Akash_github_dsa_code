#include <iostream>
#include <string>
using namespace std;

static void fun(){
    int x =0;
    cout<<x<<endl;
    x++;

}
int main(){
    fun();
    fun();
    fun();
    return 0;

}