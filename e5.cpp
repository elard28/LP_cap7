#include <iostream>

using namespace std;

int fn(int &n)
{
	n=n+5;
	return 5;
}

int main(int argc, char const *argv[])
{
	int a=2;
	int b=2;

	int x=a+fn(a); //12
	int y=fn(b)+b; //12

	cout<<"x: "<<x<<endl;
	cout<<"y: "<<y<<endl;

	return 0;
}
