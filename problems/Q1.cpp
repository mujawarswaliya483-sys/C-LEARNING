#include<iostream>
using namespace std;

int main(){
  int add[5] = { 1, 2, 3, 4, 5 };
  int sum = 0;
  int i;

  for( int i=0;i<5;i++)
{
    sum = sum + add[i];

}
    cout<<" total sum = "<< sum <<endl;

 return 0;
}
