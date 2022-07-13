#include<bits/stdc++.h>
using namespace std;

//Using Memoization  - Top Down
//Time Complexity - O(n) -  for linear passing
//Space complexity O(n) + O(n) -> One for the dp array , other one for the recursion stack space

/*int fib_mem(int n, int dp[]){
    if(n<=1) return n;
    if (dp[n]!=-1) return dp[n];
    return dp[n] = fib_mem(n-1,dp)+fib_mem(n-2,dp);
}*/

//Using Tabulation Method - Bottom Up
//Time Complexity - O(n) -  for linear passing
//Space complexity O(n) -  for the dp array, no recursion call stack required

/*void fib_tab(int n,int dp[]){
    dp[0]=0; dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    cout<<dp[n];
}*/

/*void fib_optimized(int n){
    int prev2 = 0, prev = 1;
    int curr_index = -1;
    for(int i=2;i<=n;i++){
        curr_index = prev2+prev;
        prev2 = prev;
        prev = curr_index;
    }
    cout<<prev;
}*/

int main(){
    int n; cout<<"Enter the n-th number: "; cin>>n;
    //int dp[n+1];
    //memset(dp,-1,sizeof(dp));
    //int result = fib_mem(n,dp);
    //cout<<result;
    //fib_tab(n,dp);
    //fib_optimized(n);
    
}