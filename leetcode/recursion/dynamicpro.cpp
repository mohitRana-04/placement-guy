#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> v, int n, vector<vector<int>>& vv, vector<int> nn){

	if(n < 0){
		vv.push_back(nn);
		return ;
	}

	solve(v, n-1, vv, nn);
	int temp = v[n];
	nn.push_back(temp);
	solve(v, n-1, vv, nn);

	
	
	
}

int main(){
	vector<int> v{5, 2, 1};
	int n = 3;
	vector<int> nn;
	vector<vector<int>> vv;
	solve(v, n-1, vv, nn);
	for(auto x: vv){
		for(auto y: x){
			cout<<y<<" ";
		}
		cout<<endl;
	}
	return 0;
}