	
#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long int
#define fin(i, n) for(int i = 0; i< n; i++)


#ifndef ONLINE_JUDGE
#define debug(x) cerr<< #x <<" "<< x<<endl; 
#else
#define debug(x)
#endif

/*-----------------------------------------------------------------------*/

void solve(){
	int n; cin>>n; 
	vector<int> v;
	for(int i = 0; i<n; i++){
		int temp; cin>>temp;
		v.push_back(temp);
	}

	// for(auto x: v){
	// 	cout<<x<<" ";
	// }
	

	int x, y; cin>>x>>y;

	int count0 = 0, count1 = 0, ans = 0;

	int r = 0, l = 0;
	// making a window
	while(l<x+y){
		if(v[l] == 1) count1++;
		if(v[l] == 0) count0++;
		l++;
	}

	while(r<v.size()){
		if(l==v.size()-1){
			cout<<"code here 1"<<endl;
			r++;
			l = r;
		}
		else if(count0>x && count1>y){
			cout<<l;
			r++;
			l=r;
			// l++;
			cout<<"code here 2"<<endl;
		}
		else{
			if(v[l] == 1) count1++;
			if(v[l] == 0) count0++;
			l++;
			cout<<"code here 3"<<endl;
		}
		cout<<l<<endl;
		
	}

	cout<<count0<<" "<<count1;

	// cout<<ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
	
	solve();
	// cout<<"hello";	
    
    return 0;
}
