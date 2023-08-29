#include <bits/stdc++.h>
using namespace std;

int dp[10][10];

int solve(int p, int n, int product, int k){
	// p = 1, 2, 3 and n= size which is 2

	if(p == 0 || n == 0){
		if(product == 0) return 0;
		if(product <= k && n!=k){

			cout<<product<<" "<<p<<" "<<n<<endl;
			return 1;
		}
		if(product>k) return 0;
	}
	
	// pick
	int pick = solve(p-1, n-1, product*p, k);
	// inot pick
	int notpick = solve(p-1, n, product, k);
	return pick+notpick;
}

int main(){
	// memset(dp, -1, sizeof(dp));
	int p = 3;
	int n = 2;
	cout<<solve(p, n, 1, n);

	// for(int i = 0; i< 4; i++){
	// 	for(int j = 0; j< 3; j++){
	// 		cout<<dp[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }

	return 0;
}