#include<iostream>
using namespace std;
struct student {
	int marks;
	char name[20];

};

void accept(struct student *s){
	cout<<"marks:\n"<<endl;
	cin>>s->marks;

	cout<<"name:\n"<<endl;
	cin>>s->name;
}

void show(struct student s){
	cout<<"marks= "<<s.marks<<endl;
	cout<<"name= "<<s.name<<endl;
}

int main(){
	struct student s;
	accept(&s);
	show(s);

	return 0;
}