#include <bits/stdc++.h>
using namespace std;
vector<int> helper(int num){
	vector<int> h;
	while(num){
		h.push_back(num%10);
		num/=10;
	}
	return h;
}

int main(){
	
	int num = 2932;
		// Your code goes here
		vector<int> v = helper(num);
		sort(v.begin(), v.end());
		/*
		2932
		2239
		23-29
		*/
		cout<< v[0]*10+v[2]+v[1]*10+v[3];


	return 0;
}