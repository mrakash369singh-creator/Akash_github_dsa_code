#include<iostream>
#include<vector>
using namespace std;
double knapsack01_rec(vector<vector<int>>& items,int W,int n){
    if(n == 0|| W == 0) return 0;

    int val = items[n-1][0];
    int wt = items[n-1][1];

    if(wt <= W){
        int include = val + knapsack01_rec(items,W-wt,n-1);
        int exclude = knapsack01_rec(items,W,n-1);
        return max(include,exclude);
    }else{
        return knapsack01_rec(items,W,n-1);
    }

}
double knapsack01_TabDP(vector<vector<int>>& items,int W,int n){
    int n = items.size();
    vector<vector<int>> dp(n+1,vector<int>(W+1,0));
    for(int i =1;i<=n;i++){
        for(int j =1;j<=n;j++){
            int val = items[i-1][0];
            int wt = items[i-1][1];

            if(wt <= j){
                dp[i][j] = max(val+dp[i-1][j-wt],dp[i-1][j]);
            }else{
                dp[i][j] = dp[i-1][j];
            }

        }
    }
    return dp[n][W];

}

int main(){
    vector<vector<int>>items = {
        {20,20},
        {30,3},
        {50,4},
        {60,5},
        {100,9}
    };

int W = 10;
vector<vector<int>> dp(items.size()+1,vector<int>(W+1,-1));
cout<<knapsack01_TabDP(items,W,items.size())<<endl;
return 0;
}