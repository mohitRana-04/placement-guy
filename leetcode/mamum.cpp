#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> v, int k){
	int n = v.size();
	double sum = 0;
	double maxi = INT_MIN;
	for(int i = 0; i< k; i++){
		sum+=v[i];
	}
	maxi = max(maxi, sum/k);
	int l = 0;
	for(int i = k; i< n; i++){

		sum = sum + v[i];
		sum = sum - v[l];
		l++;
		maxi = max(maxi, sum/k);
	}
	cout<<maxi
}

int main(){
	vector<int> v = {1, 12, -5, -6, 50, 3};
	int n= 4;
	solve(v, n);
	return 0;
}