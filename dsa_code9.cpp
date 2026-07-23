//-------------------------vector---------------------
#include <iostream>
#include <vector>
using namespace std;

int main(){
   //vector <int> vec={1,2,3,4,5,6,78}
    vector <int> vec1(5,0);
    vector <char> vec={'a','b','c','d'};
    cout<<"size = "<<vec.size()<<endl;
    vec.push_back('e');
    vec.pop_back();
    for(char val: vec){
        cout<<val<<endl;
    }
    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;
    cout<<vec.at(2);
    cout<<vec[0]<<endl;
    cout<<vec[1]<<endl;
    cout<<vec[2]<<endl;
    cout<<vec[3]<<endl;
    cout<<vec[4]<<endl;
   // -------------------------------
    vector<int> vec;
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    vec.push_back(3);
    vec.push_back(4);
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    
    

    return 0;
}