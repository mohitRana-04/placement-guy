#include <bits/stdc++.h>
using namespace std;

int maxp(int n){
	int maxi = 0;
	while(n){
		maxi = max(maxi, n%10);
		n/=10;
	}
	return maxi;
}

void solve(vector<int> v){
	int n = 10, ans = 0;
	vector<int> res(n, 0);
	for(auto x: v){
		int dig = maxp(x);
		ans = max(ans, res[dig]+x);
		res[dig] = max(res[dig], x);


	}
	
	


	


}

int main(){
	vector<int> v = {11, 93, 15, 72, 56, 92, 56};
	
	solve(v);
	return 0;
}