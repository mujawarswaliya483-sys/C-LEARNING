#include<iostream>
#include<string>
using namespace std;


void func(){
	static int x=2; 
	cout<<"x :"<<x<<endl;
	x++;
}

class A{
public:
	int x;

	void incX(){
		x = x+1;
	}
};
int main(){
	func();
	func();
	func();

A obj1;
A obj2;

obj1.x=100;
obj2.x=200;
cout<< obj1.x<<endl;
// obj.incX();
// cout<< obj.x<<endl;

	return 0;
}