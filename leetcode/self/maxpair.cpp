#include <bits/stdc++.h>
using namespace std;

int helper(int n){
    int digi = 0;
    while(n){
       digi = max(digi, n%10);
        n/=10;
    }
    return digi;
}
int main(){
    
    return 0;
}