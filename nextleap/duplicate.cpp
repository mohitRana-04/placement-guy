#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> v, int n){
	sort(v.begin(), v.end());

	int l = 0, r= n;
	// jo bhi l hai usse +1 element waha pr hona chahiye
	while(l<=r){
		int mid = l+(r-l)/2;
		// cout<<mid<<endl;
		// cout<<mid<<endl;
		if(v[mid] == mid+1){
			
			
			l = mid+1;
		}
		else{
			// cout<<r<<" "<<v[r]<<endl;
			r=mid-1;
		}
	}
	cout<<v[l];


}

int main(){
	vector<int> v = {1,3,4,2,3};
	int n = v.size()-1;
	solve(v, n);
	return 0;
}