#include <bits/stdc++.h>
using namespace std;

int binsearch(vector<int> nums, int l, int r, int target){
        // 1 2 2 3 8
    while(l<=r){
        int mid = l+(r-l)/2;
        if(nums[mid]>=target){
            r = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    return r;

}

int main(){
    vector<int> c = {8, 1, 2, 2, 3};
    vector<int> nums = c;
    sort(nums.begin(), nums.end());
    // cout<<binsearch(nums, 0, nums.size()-1, 2);
    for(auto x: c){
        cout<<1+binsearch(nums, 0, nums.size()-1, x);
    }
    
    
    
    // for(auto x: nums) cout<<x;
    return 0;
}