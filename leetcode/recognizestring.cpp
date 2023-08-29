#include <bits/stdc++.h>
using namespace std;

void reorganizeString(string s) {
        unordered_map<char, int> mp;
        for(auto x: s){ // item, freq
            mp[x]++;
        }



        priority_queue<pair<int, char>> pq;
        for(auto x: mp){ // freq, item
            pq.push({x.second, x.first});

        }
        string ans ;
        while(pq.size()>=2){
            int x1 = pq.top().first;
            char y1 = pq.top().second;
            pq.pop();
            // cout<<x1<<" "<<y1<<endl;
            

            // int x2 = pq.top().first;
            // int y2 = pq.top().second;
            // pq.pop();

            // cout<<x1<<" "<<y1<<endl;
            // cout<<x2<<" "<<y2<<endl;

            // ans = ans+y1;
            // ans = ans+y2;
            // x1--, x2--;
            // if( x1> 0) pq.push({x1,y1});
            // if( x2> 0) pq.push({x2,y2});  
        }

        // if(pq.size()){
        //     int x1 = pq.top().first;
        //     int y1 = pq.top().second;
        //     if(x1>1) return "";
        //     ans = ans+y1;
        // }
        
    }

int main(){
	
	reorganizeString("aab");
	return 0;
}