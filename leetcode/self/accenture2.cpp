#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> v, int n){
	stack<int> s;
	for(int i = n; i>=0; i--){
		if(s.size() == 0){
			cout<<-1<<endl;
		}

		while(s.size() && s.top()<v[i]){
			s.pop();
		}
		if(s.size() == 0) cout<<"here - "<<-1<<endl;
		else cout<<v[i]<<endl;

		s.push(v[i]);

	}
}

int main(){
	vector<int> v = {17, 18, 2, 4, 6, 8};
	int n = 6;
	solve(v, n-1);
	return 0;
}