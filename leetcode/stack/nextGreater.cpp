#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> v, int n){
	
	stack<int> s;
	vector<int> ans;
	for(int i = n-1; i>=0; i--){

		if(s.size() == 0){
			ans.push_back(-1);
		}

		if(s.size()!=0){
			while(s.size() && s.top()<=v[i] ){
				s.pop();
			}
			if(s.size() == 0){
				ans.push_back(-1);
			}
			else{
				ans.push_back(s.top());
			}
		}


		s.push(v[i]);



	}
	reverse(ans.begin(), ans.end());
	for(auto x: ans){
			cout<<x<<" ";
		}

}

int main(){
	vector<int> v{1,3,0,0,1,2};
	int n = v.size();
	solve(v, n);
	return 0;
}
