#include <bits/stdc++.h>
using namespace std;

int solve(int n){
	if(n==0) return 0;
	if(n<0) return INT_MAX-2;

	return min(1+solve(n-1), 1+solve(n-4));
}

int main(){
	int n = 5;
	vector<int> dp(n+1, 0);
	
	cout<<solve(n);
	return 0;
}