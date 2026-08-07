#include<iostream>
#include<string>
using namespace std;

class Person{
public:
	string name;
	int age;

	Person(string name,int age){
		this->name=name;
		this->age=age;
	}

// 	Person(){
// cout<<"parent constructor"<<endl;
// 	}

	~Person(){
		cout<<"Parent constructor"<<endl;
	}
};

class Student:public Person{
public:
	int rollNo;

	Student(string name,int age,int rollNo):Person(name,age){
		// cout<<"child constructor"<<endl;
		this->rollNo = rollNo;
	}
	~Student(){
		cout<<"child constructor"<<endl;
	}
	void getInfo(){
		cout<<"name:"<<name<<endl;
		cout<<"age:"<<age<<endl;
		cout<<"rollNo:"<<rollNo<<endl;
	}

};

int main(){
	Student s1("swaliya",90,100);
	// s1.name="rahul";
	// s1.age=29;
	// s1.rollNo=89;
	s1.getInfo();
	return 0;
}