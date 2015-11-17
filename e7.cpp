#include <iostream>

using namespace std;

float a=10;

float fun()
{
	a=a+3;
	return a;
}

int main(int argc, char const *argv[])
{
	
	float x1=3+4*5;
	float x2=3*5+4;
	float x3=3/4*5;
	float x4=3*5/4;
	float x5=a*fun();
	float x6=fun()*a;
	float x7=a/fun();
	float x8=fun()/a;

	cout<<x1<<endl;
	cout<<x2<<endl;
	cout<<x3<<endl;
	cout<<x4<<endl;
	cout<<x5<<endl;
	cout<<x6<<endl;
	cout<<x7<<endl;
	cout<<x8<<endl;


	return 0;
}