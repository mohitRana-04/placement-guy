#include <bits/stdc++.h>
using namespace std;

void solve(string s){
	for(auto x: s){
		if(isupper(x)){
			cout<<char(tolower(x));
		}

	}
}

int main(){
	string s = "aMaMHAGbadf";
	solve(s);
	return 0;
}