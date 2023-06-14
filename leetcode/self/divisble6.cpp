#include <bits/stdc++.h>
using namespace std;

bool solve(vector<int> v, int n, int sum, int k){
	
	if(sum%n == 0 && sum!= 0) return true;
	if(k<0) return false;

	return solve(v, n, sum+v[k], k-1) || solve(v, n, sum, k-1);


}

int main(){
	vector<int> v{1,2,3,4,5,6};
	int n=117;
	cout<<solve(v, n, 0, v.size()-1);
	return 0;
}