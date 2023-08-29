#include <bits/stdc++.h>
using namespace std;



int main(){
	
	string s= "SuBNesH";
	for(auto x: s){
		if(isupper(x)){
			cout<<char(tolower(x));
		}
		else{
			cout<<char(toupper(x));
		}
	}

	return 0;
}