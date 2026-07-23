
    // --------------------------function----------------------------//
#include <iostream>
using namespace std;
// int main() {

//     return 0;
// }
// void printhello(){
//     cout<<"heloo world";
    
// }
 //------------------------------------------
int min(int a,int b){
    if(a>b){
        cout<<"minum number is "<<b;
    }else if(b>a){
        cout<<"minum number is "<<a;
    }else{
        cout<<"both number are same ";
    }
}
//--------------------------------------------
int sum(int n, int sum=0){
    for(int i=0;i<=n;i++){
        sum+=i;
    }
    cout<<sum;
}
//---------------------------------------------
int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    cout<<fact;
}
//-----------------------------------------------
int dectob(int decnum){
    int ans=0,pow=1;
    while(decnum>0){
        int rem=decnum%2;
        decnum/=2;
        ans+=(rem*pow);
        pow*=10;
    }
    cout<<ans<<endl;

}
//////------------------


int main(){
    dectob(1);
    for(int i=0;i<=10;i++){
        dectob(i);
    }
    //printhello();
   // printhello();
    min(5,5);
    sum(10);
    fact(6);
    return 0;
}
