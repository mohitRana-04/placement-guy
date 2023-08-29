#include <bits/stdc++.h>
using namespace std;

class A{
private: 
	int point;
	int power;
	public:


	A(int point, int power){
		this->point = point;
		this->power = power;
	}

	A(A &temp){
		this->point = temp.point;
		this->power = temp.power;
	}

	void get(){
		cout<<power;
	}
};

int main(){
	
	A a(4, 6);
	// a.get();

	A b(a);
	b.get();


	return 0;
}