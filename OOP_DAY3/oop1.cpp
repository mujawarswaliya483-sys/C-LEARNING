#include<iostream>
using namespace std;
class A{
private:
	int a;
protected:
	int b;
public:
	int c;
};

int main(){
	A obj;

	obj.a=20;

	obj.b=30;

	obj.c=40;
	//cout<<obj.a<<endl; not allowed
	//cout<<obj.b<<endl; not allowed
	cout<<obj.c<<endl; //allowed
    
    
}