#include<iostream>
#include<string>
using namespace std;

class Employee{
private:
	int age;
	string name;
	double salary;

public:
	int getAge(){
		return age;
	}
	void setAge(int a){
		this->age=a;
	}
};
int main(){
	Employee e1;
	
	e1.setAge(22);
	cout<<e1.getAge();
}