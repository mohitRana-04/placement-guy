#include <bits/stdc++.h>
using namespace std;

bool solve(string s1, string s2, string s3, int n, int m, int o){
	
	if(o == 0) return true;
	if(n==0 && m == 0) return false;


	if(n > 0 && m>0 && s1[n-1] == s3[o-1] && s2[m-1] == s3[o-1] ){
		return solve(s1, s2, s3, n-1, m, o-1) || solve(s1, s2, s3, n, m-1, o-1);
	}

	if(n> 0 && s1[n-1] == s3[o-1]){
		return solve(s1, s2, s3, n-1, m, o-1);
	}
	if(m>0 && s2[m-1] == s3[o-1]){
		return solve(s1, s2, s3, n, m-1, o-1);
	}
	return false;


}

int main(){
	string s1 = "aabcc", s2 = "dbbca", s3 = "aadbbcbcac";
	cout<<solve(s1, s2, s3, s1.size(), s2.size(), s3.size());
	return 0;
}