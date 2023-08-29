#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {1,2, 3};
    int k = 3;
    int win = 0, sum = 0;
	int l =0;
	for(int i = 0; i< nums.size(); i++){
		sum = sum + nums[i];
        // cout<<sum<<endl;
		if(sum == k){
            
			win++;
			sum=sum-nums[l];
			l++;
		} 
		else if(sum > k) {
            
			sum=sum-nums[l];
            
			l++;
		}
	}
    cout<<sum;
    cout<<win;
		
    return 0;
}