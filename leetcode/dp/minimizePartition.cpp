#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> v, int n, int sum, int size, vector<vector<int>>& vv){
	
	if(sum == n){
		vv[size][sum] = 1;	
		return ;
	}
	if(size<0){
		vv[size][sum] = 0;
		return ;
	}

	vv[size][sum] = solve(v, n, sum+v[size], size-1, vv)solve(v, n, sum, size-1,vv); 


}

int main(){
	// vv -> [size][sum]
	vector<int> v {1, 2, 7};
	vector<vector<int>> vv;
	int n= 10;
	cout<<solve(v, n, 0, v.size()-1, vv)<<endl;
	for(auto x: vv){
		for(auto y : x){
			cout<<y<<" ";
		}
		cout<<endl;
	}
	return 0;
}