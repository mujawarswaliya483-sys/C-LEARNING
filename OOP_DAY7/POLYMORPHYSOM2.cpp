// RUN TIME POLYMORPHYSM
// FUNCTION OVERRIDING


#include<iostream>
#include<string>
using namespace std;

class Parent{
public:
    show(){
        cout<<"Parent class\n";
    }

   virtual void Hello(){
        cout<<"hello from par\n";
    }
};

class Child : public Parent{
public:
    void getInfo(){
        cout<<"Child class\n";
    }

    void Hello(){
        cout<<"hello from child\n";
    }
};

int main(){
    Child c1;
    c1.Hello();
	return 0;
}