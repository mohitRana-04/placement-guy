#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> v, int n){
	
	stack<int> s;
	vector<int> ans;
	
	for(int i = 0; i<n; i++){

		if(s.size() == 0){
			ans.push_back(-1);
		}

		else{
			while(s.size() && v[i]>= s.top() ){
				s.pop();
			}
			if(s.size()){
				ans.push_back(s.top());
			}
			else{
				ans.push_back(-1);
			}
		}


		s.push(v[i]);
	}	
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
