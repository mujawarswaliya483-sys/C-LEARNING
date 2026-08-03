#include<stdio.h>
int main(){
	int a=10;
	int *p;
	p = &a;

	printf("%d\n",a);
	*p = 50;
	printf("%d",a);
	return 0;
}