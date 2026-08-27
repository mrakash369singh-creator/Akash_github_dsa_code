//      Complete Dynamic Programming | DP Series - Lecture 1
//   dp is a optimization techineque that solve problems with :
//       . overlaping subproblems 
//       . optimal substructure
// by sorting intermidiate results to avoide redundant compuatations.



#include<iostream>
#include<vector>
using namespace std;

int fib(int n){
    if(n<=1){
        return n;
    }else{
        return fib(n-1) + fib(n-2);
    }
}
// fibonacci DP code memoization 
int fibDP(int n, vector<int>&f){
    if(n<= 1) return n;
    if(f[n] != -1){
        return f[n];
    }
    return  f[n] = fibDP(n-1,f)+ fibDP(n-2,f);
}
// fibonacci DP code  tabulation 
int fibTabDP(int n){
    vector<int> dp(n+1);
    dp[0] = 0;
    dp[1] = 1;
    for(int i =2;i<=2;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}
int main(){
    int n = 6;
    vector<int> f(n+1,-1);
    cout<<fibTabDP(n)<<endl;
    return 0;

}