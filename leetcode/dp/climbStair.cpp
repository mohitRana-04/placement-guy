#include <bits/stdc++.h>
using namespace std;

// min steps

int solve(int n){
	if(n == 0) return 0;
	if(n<0) return INT_MAX-3;

	int l = 1+solve(n-1);
	int r = 1+solve(n-4);
	return min(l,r);
}

int main(){
	int n = 6;
	cout<<solve(n);
}