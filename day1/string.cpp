#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char str[]="Aniket";
	// char str2[]="kumar";
	char str2[20];

	// cout<<str<<endl;

	// int r=strlen(str);
	// cout<<r;

	// strrev(str);
	// cout<<str;

	// strcat(str,str2);
	// cout<<str;

	strcpy(str2,str);
	cout<<str2;
	return 0;
}