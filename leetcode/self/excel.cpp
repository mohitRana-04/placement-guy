#include <bits/stdc++.h>
using namespace std;

void solve(int n){
	while(n){
		cout<<n<<endl;
		char m = 'A' + n%26;
		cout<<m<<endl;
		n = n/26;
	}
}

int main(){
	int n = 701;
	solve(n);
	return 0;
}