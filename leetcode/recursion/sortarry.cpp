#include <bits/stdc++.h>
using namespace std;

void insert(vector<int> &v, int temp){

	if(v.size() == 0 || v[v.size()-1]<=temp ){
		v.push_back(temp);
		return;
	}

	int val = v[v.size()-1];
	v.pop_back();
	insert(v, temp);
	v.push_back(val);

}

void solve(vector<int>& v, int n){

	if(n <0) return;

	int temp = v[n];
	// cout<<temp;
	v.pop_back();
	solve(v, n-1);
	insert(v, temp);

	
}

int main(){
	vector<int> v{3, 2, 4, 1, 5, 0};
	int n = 5;
	solve(v, n);
	for(auto x: v) cout<<x;
	return 0;
}