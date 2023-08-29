#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "abab", p = "ab" ;
    vector<int> pv(26, 0);
	vector<int> win(26, 0);
	int n = p.size(), m = s.size();

		// creating p size
    int l =0;
	for(int i = 0; i< n; i++){
		pv[p[i]-97]++;
		win[s[i]-97]++;
	}
    // for(auto x: pv){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    // for(auto x: win) cout<<x<<" ";

    for(int i = n; i< m; i++){
        if(pv == win){
            cout<<l<<" ";
        }
        win[s[i]-97]++;
        win[s[l]-97]--;
        l++;
    }
    return 0;
}