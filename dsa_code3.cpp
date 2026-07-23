//------------------------- loop in dsa---------------------------------

#include <iostream>
using namespace std;
int main(){
    int count=1;
    while(count<=6){
        cout<<"hello world"<<count<<endl;
        count++;
    }
     int sum=0;
    for(int i=0; i<=10; i++){
     cout<<"hello world"<<i<<endl;
     
     if(i%2!=0){
      sum=sum+i; 
     }
    }
    cout<<sum<<endl;

    int n=10;
    int i=1;
    do{
        cout<<"helo world"<<endl;
        i++;
    }while(i<=n);

    //int n=10;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            cout<<i<<"*"<<j<<"="<<i*j<<endl;
        }
    }
    return 0;
}    