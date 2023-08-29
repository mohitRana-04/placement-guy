#include <bits/stdc++.h>
using namespace std;

long long minimumPossibleSum(int n, int target) {
        set<long> s;
        long l = 1;
        while(s.size()<=n){
        	int findEle = 0;
            if(l<target){
                l = target-l;
            }

            s.insert(l);
            
//             means nahi hai 
            // if(s.find(findEle)!=s.end()){
            //     s.insert(l);
            // }
            l++;
        }
    }

int main(){
	int n = 3, target = 3;
	// cout<<minimumPossibleSum( n, target);
    // cout<<7;

    int num;
    cout<<num<<endl;
    num = num >>1 + 1; 
    cout<<num<<endl;
	return 0;
}