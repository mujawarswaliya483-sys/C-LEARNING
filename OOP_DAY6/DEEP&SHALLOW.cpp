#include<iostream>
#include<string>
using namespace std;

class Student{
public:
	string name;
	double *cgpaPtr;

Student(string name,double cgpa ){
	this->name=name;
	cgpaPtr = new double;	
	*cgpaPtr = cgpa;
}

Student(Student &obj){
	this->name=obj.name;
	cgpaPtr = new double;
	*cgpaPtr=*obj.cgpaPtr; // deep copy
}

void getInfo(){
	cout<<"name: "<<name<<endl;
	cout<<"cgpa: "<<*cgpaPtr<<endl;
}
};

int main(){
	Student s1("rahul kumar",8.9);
	Student s2(s1);
	
	 s1.getInfo();
	*(s2.cgpaPtr) = 9.5;
	 s1.getInfo();
     s2.name="swaliya";
	  s2.getInfo();

return 0;
}