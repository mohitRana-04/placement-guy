#include <bits/stdc++.h>
using namespace std;

void solve(int n){
	
	for(int i = 1; i< 7; i++){
		for(int j = 1; j< 7; j++){
			// cout<<i<<j<<endl;
			if(i+j == n) cout<<i<<" "<<j<<endl;
		}
	}

}

int main(){
	
	int n = 8 ;
	solve(n);
	return 0;
}