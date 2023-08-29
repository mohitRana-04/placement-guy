#include <bits/stdc++.h>
using namespace std;


int main(){
	

	string s1 = "abcdefg";
	string s2 = "hgbfabcd";

	int n = s1.size();
	int m = s2.size();
	int dp[n+1][m+1];

	for(int i = 0; i<n+1; i++){
		for(int j = 0; j<m+1; j++){
			if(i*j == 0){
				dp[i][j] = 0;
			}
		}
	}
	
	for(int i = 1; i<n+1; i++){
		for(int j = 1; j< m+1; j++){
			if(s1[i-1] == s2[j-1]){
				dp[i][j] = 1+dp[i-1][j-1];
			}
			else{
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
			}
		}
		// cout<<endl;
	}

	for(int i = 1; i<n+1; i++){
		for(int j = 1; j< m+1; j++){
			cout<<dp[i-1][j-1]<<" ";
		}
		cout<<endl;
	}



	return 0;
}