
#include <iostream>
using namespace std;
int main(){
    //----------------------floyed trangle---------
    int n=5;
    int k=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<k<<" ";
            k+=1;
        }
        cout<<"\n";
    }
    // --------------------inverted trangle----------********************************
    int n2=4;
    int k2=1;
    for(int i=0;i<n2;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<n2-i;j++){
            cout<<(i+1)<<" ";
        }
        cout<<"\n";
        k2+=1;
        
    }
    

    
    return 0;
}
