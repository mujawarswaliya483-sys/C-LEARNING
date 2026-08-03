#include<iostream>
#include<string>
using namespace std;

class student {
private:
	int id;
	string name;
	float marks;

public:

	void setData(int id,string name,float marks){
		this->id=id;
		this->name=name;
		this->marks=marks;
	}

	void displayData(){
		cout<<"id is: "<<id<<endl;
		cout<<"name is: "<<name<<endl;
		cout<<"marks:"<<marks<<endl;
	}

};

int main(){
	student s1;
	student s2;
	
	s1.setData(102,"swaliya",92.34);
	s1.displayData();
	s2.setData(102,"aniket",70);
	s2.displayData();


	return 0;
}