#include <bits/stdc++.h>
using namespace std;

void solve(int n, int k){
	unordered_map<int, int> mp;
	int l = 1;
	while(mp.size() != k){
		if(!mp[k-l]){
			cout<<"hello";
			mp[l]++;
		}
		l++;
	}
	for(auto x: mp){
		cout<<x.first<<" ";
	}

}

int main(){
	int n = 5, k  = 4;
	solve(n, k);
	return 0;
}