#include <bits/stdc++.h>
using namespace std;


bool solve(vector<int> v, int mid, int h){
    //h = 6
    int ans = 0;
    for(auto x: v){
        ans = ans + ceil(x*1.0/mid);
    }
    // ans = 3
    if(ans>h) return 1; //eat more
    else return 0; //eat less

}

int minEatingSpeed(vector<int> v,int h){
    int l = 1, r = 0;

    for(auto x: v) r = max(r, x);
    // cout<<r;

    while(l<=r){
        int mid = l+(r-l)/2;
        if(solve(v, mid, h)){
            l = mid+1;
        }
        else{
            r= mid-1;
        }
    }
    return l;

}

int main(){
	vector<int> v = {30, 11, 23, 4, 20};
    int h = 6;

	cout<<minEatingSpeed(v,h);
    
	
}