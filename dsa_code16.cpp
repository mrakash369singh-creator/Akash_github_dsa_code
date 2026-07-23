// #include <iostream>
// using namespace std;
// string isPrime(int n){
//     for(int i=2;i*i<=n;i++){
//         if(n%i==0){
//             cout<<"non prime";
//             break;
//         }
//     }
//     return "prime";
// }
// int main(){
//     int n=42;
//     cout<<isPrime(n)<<endl;
//     return 0;
// }
//-------------------------------------digits in a number-------------------
// #include <iostream>
// using namespace std;
// void printdigits(int n){
//     while(n!=0){
//         int digit =n%10;
//         cout<<digit;
//         n=n/10;
//     }

// }

// int main(){
//     int n=2345;
//    printdigits(n);
//     return 0;
// }
//------------------------------------------gcd------------------------------
// #include <iostream>
// using namespace std;
// int gcd(int a ,int b){
//     if(a>0 && b>0){
//         if(a>b){
//             a=a%b;
//         }else{
//             b=b%a;

//         }
//     }
//     if(a==0){return b;}
//     return a;
// }


// int main(){
//     cout<<gcd(20,28)<<endl;
//     cout<<"lcm is "<<20*28/gcd(20,28);
   
//     return 0;
// }
//------------------------------------2d array-----------------------

// #include <iostream>
// using namespace std;

// bool linearSearch(int mat[][3],int rows,int cols,int key){
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             if(mat[i][j]==key){
//                 return true;
//             }
//         }
//     }
//     return false;
// }
// int getMaxSum(int mat[][3],int rows,int cols){
//     int maxRowSum = INT_MAX;
//    // int rowSum=0;
//     for(int i=0;i<rows;i++){
//         int rowSum=0;
//         for(int j=0;j<cols;j++){
//             rowSum+=mat[i][j];
//         }
//         maxRowSum = max(maxRowSum,rowSum);
//     }
//     return maxRowSum;
// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
//     int rows=4;
//     int cols=3;
//     //cout<<matrix[2][1]<<endl;
//     // for(int i=0;i<rows;i++){
//     //     for(int j=0;j<cols;j++){
//     //         cin>>matrix[i][j];
//     //     }
//     //   //  cin<<endl;
//     // }
//     // for(int i=0;i<rows;i++){
//     //     for(int j=0;j<cols;j++){
//     //         cout<<matrix[i][j]<<' ';
//     //     }
//     //     cout<<endl;
//     // }
//    // cout<<linearSearch(matrix,rows,cols,20)<<endl;
//     cout<<getMaxSum(matrix,rows,cols)<<endl;

//     return 0;
// }
//------------------------------diagonal sum-------------------
// #include <iostream>
// using namespace std;

// int diagonalSum(int mat[][4],int n){
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=mat[i][i];
//         if(i != n-i-1){
//             sum += mat[i][n-i-1];
//         }

//     }
// }
// int main(){

//     return 0;
// }
//---------------------------------2D vector------------
#include <iostream>
#include <vector>
using namespace std;



// int main(){
//     vector<vector<int>> mat={{1,2,3},{4,5,6},{7,8,9}};
//     cout<<mat[0][0]<<endl;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<mat[i][j]<<' ';
//         }
//         cout<<endl;
//     }

//     return 0;
// }
//---------------------------Matrix rows sum--------------
int main(){
    vector<vector<int>> mat={{1,2,3},{4,5,6,4,5,6,8,0},{7,8,9}};
    cout<<mat[0][0]<<endl;
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat.size();j++){
            cout<<mat[i][j]<<' ';
        }
        cout<<endl;
    }

    return 0;
}
