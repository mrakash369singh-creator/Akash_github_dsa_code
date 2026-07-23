// -----------------------patern -----------------paatern--------------
#include <iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }

    int m=26;
    for(int i=0;i<m;i++){
        char ch='A';
        for(int j=0;j<m;j++){
            cout<<ch;
            ch=ch+1;
        }
        cout<<"\n";
    }

    int a=3;
    int k=0;
    for(int i=0;i<a;i++){
        for(int j=0;j<n;j++){
            cout<<i*a+j+1<<"       ";
            k=k+1;
            
        }
        cout<<"\n";
        

    }

    //-------------------------------* patern *-------

    int b=8;
    for(int i=0;i<b;i++){
        for(int j=1;j<(i+1);j++){
            cout<<"*"<<" ";
        }
        cout<<"\n";
    }

    int c=10;
    int s=1;
    for(int i=0;i<c;i++){
        for(int j=0;j<(i+1);j++){
            cout<<s<<" ";

        }
        s=s+1;
        cout<<"\n";
    }
    int n2=5;
    for(int i=0;i<n2;i++){
        for(int j=i;j>0;j--){
            cout<<j;
        }
        cout<<"\n";
    }

    return 0;
}