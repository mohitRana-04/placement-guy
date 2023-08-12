#include <bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>> v){
	int n = v.size();
	int m = v[0].size();
	// cout<<m;
	int start = v[0][0];
	int end = v[0][1];
	int buses = 1;
	for(int i = 1; i<n; i++){

		// overlapping
		if(v[i][0] > end){
			buses++;
		}
		end = v[i][1];
			
		

	}
	cout<<buses;
}

int main(){
	vector<vector<int>> v{{2,8}, {6,10}, {12,14}, {12, 20}};
	
	solve(v);
	return 0;
}