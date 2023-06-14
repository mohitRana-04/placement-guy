#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> arr, vector<int> dep){
	
	int plat=1, maxi = 0, n = arr.size();
	int i = 1, j = 0, maxi = 0;
	while(i < n && j < n ){

		if(arr[i] <= dep[j] ){
			plat++;
			i++;
		}
		else if(arr[i] > dep[j] ){
			plat--;
			j--;
		}

		maxi = max(maxi, plat);

	}
	cout<<maxi;

}

int main(){
	vector<int> v;
	int n;
	solve(v, n);
	return 0;
}