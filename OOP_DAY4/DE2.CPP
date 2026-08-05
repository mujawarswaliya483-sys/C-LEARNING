#include<iostream>
#include<string>
using namespace std;

class Person{
	int age;
	char name;
public:
	Person(){
		int age=10;
		string name="Swaliya";
	}
	void displayData();
	
};

void Person::displayData(){
	cout<<"name"<<name<<endl;
	cout<<"age"<<age<<endl;
}

int main(){
	Person p1;
	p1.displayData();
	
}

