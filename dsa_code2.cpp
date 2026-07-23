// ---------------------------condisional statement--.>if,else
#include <iostream>
using namespace std;
int main(){
   // int n=45;
   int n;
    if(n>0){
        cout<<"n is a positive number"<<endl;
    }else{
        cout<<"n is a neagitive number"<<endl;
    }
    
    cout<<"enter a number :";
    cin>>(n);
    cout<<(n>=0 ? "you enterd positive number":"you enterd a negative number")<<endl;
    
    return 0;
 }