#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v  = {1, 1, 2};
    int l = 0, r = 0;
    while(r<v.size()){
        if(v[l] != v[r]){
            cout<<v[l];
            l = r;
        }
        r++;
    }
    cout<<v[l]<<" "<<v[r];
    return 0;
}