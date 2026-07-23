//-------------------------------recursion usesses-------------
#include<iostream>
using namespace std;
//--------------------------
int fact(int n) {
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
//-------------------------
int sum(int n2){
    if( n2 == 1){
        return 1;
    }
    return n2 + sum(n2-1);

}
//-------------------------
int fib(int n){
    if(n==0 || n==1){
        return n;
    }
    return fib(n-1)+ fib(n-2);
}
int main(){
    cout<<fact(5)<<endl;

    cout<<sum(8)<<endl;

    cout<<fib(6)<<endl;
    return 0;
}