#include<iostream>
using namespace std;

class A{
    int a,b;
    int x,y;
    public:
    //default constructor..

	A()     //Default
	{       
	a=10;
	b=20;
	cout<<a<<endl;
	cout<<b<<endl;
	}

   // paramiterized constructor...

   //A(int a,int b)
 //  {
 //   cout<<a<<endl;
//	cout<<b<<endl;
//   }

   // copy constructor..

    A(int a,int b)
   {
   x=a;
   y=b;
    cout<<x<<endl;
	cout<<y<<endl;
   }

   A(A &ref)
   {
      x=ref.x;
      y=ref.y;
      cout<<x<<endl;
	  cout<<y<<endl;

   }
};
int main(){
	// A o;  // A obj = A() -> another way...

	// A o1(100,200);

	A obj(10,20);
	A obj2 = obj;
	return 0;	
}