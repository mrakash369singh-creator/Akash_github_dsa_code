 //------------------------INTRODUCTION TO DSA IN C++-------------------------
 #include <iostream>
using namespace std;
int main(){
    int age=24;
    char grade='akash singh';
    float flt=34.6f;
    bool isSafe=true;
    double price=100.95;
    //print
    cout<<"hello world";
    //varibles
    cout<<sizeof(age)<<endl;
    cout<<age<<endl;
    cout<<sizeof(grade)<<endl;
    cout<<grade<<endl;
    cout<<sizeof(flt)<<endl;
    cout<<flt<<endl;
    cout<<sizeof(isSafe)<<endl;
    cout<<isSafe<<endl;
    cout<<sizeof(price)<<endl;
    cout<<price<<endl;
//type casting (implicite)
    char Grade='a';
    int value=Grade;
    cout<<value;
//Type casting(explicite)
    double Price=100.99;
    int aprice=(int)Price;
    cout<<aprice;

    //input
    int nage;
    cout<<"enter the age";
    cin>>nage;
    cout<<2*nage;

    //operations
    int a;
    int b;
    cin>>a;
    cin>>b;
    cout<<"sum is"<<a+b<<endl;
    cout<<"subtraction is"<<a-b<<endl;
    cout<<a*b<<endl;
    cout<<a/(double)b<<endl;
    cout<<a%b<<endl;
    // relation operaror
    cout<<(a==b)<<endl;
    cout<<(a!=b)<<endl;
    cout<<(a>b)<<endl;
    cout<<(a<b)<<endl;

    //logicial operator
    bool c=true;
    bool d=false;
    cout<<(c||d)<<endl;
    cout<<(c&&d)<<endl;
    cout<<!(d)<<endl;
    //uniry operator-->
                  //++a-pree,a++-post
    a++;
    cout<<a<<endl;

    return 0;
}
