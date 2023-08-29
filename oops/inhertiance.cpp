#include <bits/stdc++.h>
using namespace std;

class A{
public: 
	int a = 5;
private:
	int b = 5;
protected:
	int c = 5;
};

class B: private A{
public:
	void get(){
		cout<<this->c;
	}
};

class Animal{

public: 
	void go(){
		cout<<"dance";
	}

};

class Dog: public Animal{

public:

	void go(){
		cout<<"not dance";
	}

};


int main(){

	Dog d;
	d.go();
	
	// A obj;
	// cout<<obj.a;

	// B obj;
	// obj.get();



	return 0;
}