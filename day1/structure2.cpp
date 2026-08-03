#include<iostream>
using namespace std;

struct stu{
private:
	int roll; //int 4bytes
	char name[20]; 
	int marks;
public:
	void setData(){
    cout<<"enter student roll no: ";
	cin>>roll;

	cout<<"enter student name: ";
	cin>>name;

	cout<<"enter student marks: ";
	cin>>marks;
	}

	void display(){
		cout<<"roll: "<<roll<<endl;
		cout<<"name: "<<name<<endl;
		cout<<"marks: "<<marks<<endl;

	}

};


int main(){
	struct stu s1;
	s1.setData();
	s1.display();
	return 0;
}