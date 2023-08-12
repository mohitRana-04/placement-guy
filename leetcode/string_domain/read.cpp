#include <bits/stdc++.h>
using namespace std;

void reverse_array(vector<int> &right, int start, int end)
{
    while (start < end)
    {
        int temp = right[start]; 
        right[start] = right[end];
        right[end] = temp;
        start++;
        end--;
    } 
}  

void solve(vector<int> v, int n){
	
	vector<int> left;
	vector<int> right;

	int l = 0, r = 0;
	for(int i = 0; i<n; i++){
		l += v[i];
		left.push_back(l);
	}

	// for(auto x: left){
	// 	cout<<x;
	// }

	for(int i = n; i>0; i--){
		r+=v[i];
		right.push_back(r);
	}
	

	reverse_array(right, 0, right.size()-1);
	
	
	int ans = 0;
	for(int i = 0; i<n; i++){
		cout<<left[i] <<" "<<right[i]<<endl;
		if(left[i]>right[i]) ans++;
	}
	cout<< ans;

}

int main(){
	vector<int> v{10, -5, 6};
	int n = v.size()-1;
	solve(v, n);
	return 0;
}
