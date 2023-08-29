#include <bits/stdc++.h>
using namespace std;

int dp[1001][1001];
int solve(string s1, string s2, int n, int m){
	
	// base cond
	if(n == 0 || m == 0 ) return 0;

	else if(s1[n-1] == s2[m-1]){
		return dp[n][m] =   1+ solve(s1, s2, n-1, m-1);
	}
	else{
		return dp[n][m] =  max(solve(s1, s2, n-1, m), solve(s1, s2, n, m-1));
	}

}

int main(){
	string s1 = "gabcd";
	string s2 = "gfcdg";
	memset(dp, -1, sizeof(dp));
	// cout<<dp[0][0];
	int n = s1.size();
	int m = s2.size();
	cout<<solve(s1, s2, n, m);
	return 0;
}