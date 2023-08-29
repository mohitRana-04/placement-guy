#include <bits/stdc++.h>
using namespace std;

class A{

public:
	int val = 5;
	char c;

	void print(){
		cout<<"check";
	}
	void set(int a){
		val=a;
	}
	void get(){
		cout<<val;
	}



};

void solve(int &a, int &b){
	a = a+b;
	b = b+a;

}

int main(){
	
	// static allocation
	// A obj ;
	// // obj.get();
	
	// // dynamic allocatiom
	// A *p = new A;

	// // either
	// (*p).set(10);
	// // or
	// p->get();

	int a = 5, b = 8;

	solve(a, b);
	cout<<a+b;
	

	// obj.set(5);
	// obj.get();
	// A *ptr = new A;
	// cout<<sizeof(ptr);
	// cout<<*ptr.check();





	// a pointer stores an address

	return 0;
}