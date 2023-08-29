#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> v, int k){
	int s = v.size();
	vector<int> d(s, 0);
	

	for(int i = 0; i< s; i++){
		d[i] = v[(i+k)%s];
	}
	for(auto x: d) cout<<x;
}

int main(){
	// vector<int> v = {1, 2, 3,4 ,5};
	// int n = 2;
	// solve(v, n);
	
	return 0;
}