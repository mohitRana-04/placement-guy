#include <bits/stdc++.h>
using namespace std;

// total steps
int solve(int ind, vector<int> &dp) {
    if(ind == 0) return 1;
    if(ind<0) return 0;
    if(dp[ind]!= 0) return dp[ind];

    int l = solve(ind-1, dp);
    int r = solve(ind-4, dp);

    dp[ind] = l+r;
    return dp[ind];

    
}

int main() {

    int n = 8;
    vector<int> dp(n+1, 0);
    int result = solve(n, dp); 
    cout<<result;


    return 0;
}
