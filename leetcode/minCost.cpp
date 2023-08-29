#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> v, int ind){
	if(ind < 0) return 0;
	
	


	int one = v[ind] + solve(v, ind-1);
	int two = v[ind] + solve(v, ind-2);

	return min(one, two);
}

int main(){
	vector<int> v= {1,100,1,1,1,100,1,1,100,1};
	int n = v.size()-1;
	cout<<solve(v, n);
	return 0;
}