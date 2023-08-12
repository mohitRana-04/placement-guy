#include <bits/stdc++.h>
using namespace std;

void solve(TreeNode* tt){
	
	if(tt == NULL) return;

	int l = 1+ solve(tt->left);
	int r = 1+ solve(tt->right);
	return max(l, r);
}

int main(){
	vector<int> v;
	int n;
	solve(v, n);
	return 0;
}