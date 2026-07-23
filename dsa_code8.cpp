//-----------------------------Array-------------------------------->

#include <iostream>
using namespace std;

int main(){
    
    int mark[5]={22,33,56,89,78};
    mark[0]=40;
    cout<<mark[0]<<endl;
    cout<<mark[1]<<endl;
    cout<<mark[2]<<endl;
    cout<<mark[3]<<endl;
    cout<<mark[4]<<endl;
    for(int i=0;i < sizeof(mark)/sizeof(int);i++){
        cout<<mark[i]<<endl;
    }

    double price[10];
    int num[]={55,33,98,76,89};
    int size=sizeof(num)/sizeof(int);
    int smallest=INT_MAX;
    for(int i=0;i<size;i++){
        if(num[i]<smallest){
            smallest=num[i];
        }
    }
    cout<<"smallest num is "<<smallest<<endl;

    
    return 0;
}