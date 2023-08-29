#include <bits/stdc++.h>
using namespace std;

// total steps

int solve(int n){
	
	if(n == 0) return 1;
	if(n < 0) return 0;

	int l = solve(n-1);
	int r = solve(n-4);
	return l+r;
}

int main(){
	int n = 6;
	cout<<solve(n);
}