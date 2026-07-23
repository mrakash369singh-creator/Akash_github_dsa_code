//-----------------------------vector------------------------
// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int> vec= {1,2,3,4,5,6,7,8};
//     // vec.push_back(1);
//     // vec.push_back(2);
//     // vec.erase(vec.begin(),vec.begin()+2);
//     // cout<<vec.size()<<endl;
//     // vector<int>::iterator it;

//     // for(it=vec.begin(); it != vec.end();it++){
//     //     cout<<*(it)<<" ";
//     // }
//     vector<int>::reverse_iterator it;

//     for(it=vec.rbegin(); it != vec.rend();it++){
//         cout<<*(it)<<" ";
//     }



//     return 0;
// }

//-------------------------------list--------------------
// #include <iostream>
// //#include <vector>
// #include <list>
// using namespace std;

// int main(){
//     list<int>lst;
//     lst.push_back(1);
//     lst.emplace_back(2);
//     lst.push_front(3);

//     for(int val : lst){
//         cout<<val<<" ";
//     }
//     cout<<endl;
//     return 0;
// }
//----------------------deque------------------------
// #include <iostream>
// //#include <vector>
// //#include <list>
// #include <deque>
// using namespace std;

// int main(){
//     deque<int> dq= {1,2,3,4,5,6,7};
//     for(int val : dq){
//         cout<<val<<" ";
//     }

//     return 0;
// }
//---------------------------pair--------------------
// #include <iostream>
// //#include <vector>
// //#include <list>
// #include <deque>
// using namespace std;

// int main(){
//    pair<int , int> p= {1,3};
//    cout<<p.first<<endl;

//     return 0;
// }
//--------------------------stack----------------------
// #include <iostream>
// //#include <vector>
// //#include <list>
// //#include <deque>
// #include <stack>
// #include <queue>

// using namespace std;

// int main(){
//    stack<int>s;
// //    s.push(1);
// //    s.push(2);
// //    s.push(3);
// //    cout<<s.top()<<endl;
// //    s.pop();
// //    cout<<s.top()<<endl;
//    queue<int>q;
//    q.push(1);
//    q.push(2);
//    q.push(3);
//    cout<<q.front()<<endl;
//    q.pop();
//    cout<<q.back()<<endl;


//     return 0;
// }

//----------------------map--------------
#include <iostream>
#include <map>
 using namespace std;

 int main(){
    map<string ,int>m;
    m["tv"]=100;
    m["dvd"]=200;
    return 0;
 }