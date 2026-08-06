#include<iostream>
#include<string>
using namespace std;

class Employee{
private:
	int age;
	string name;
	int salary;

public:
	Employee(){
		age=21;
		name="swaliya";
		salary=20000;
	}

	Employee(int age,string name,int salary){
		this->setAge(age);
		this->setName(name);
		this->setSalary(salary);
	}

	int setAge(int age){
		this->age=age;
	}

	string setName(string name){
		this->name=name;
	}

	int setSalary(int salary){
		this->salary=salary;
	}

	int getAge(){
		return age;
	}

	string getname(){
		return name;
	}

	int getsalary(){
		return salary;
	}

	
	void displayData(){
		cout<<"age:"<<age<<endl;
		cout<<"name:"<<name<<endl;
		cout<<"salary:"<<salary<<endl;
	}
};



int main(){
	Employee e1(30,"swaliya",20000);
	e1.displayData();

}