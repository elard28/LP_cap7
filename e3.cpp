#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	bool a=1;
	bool b=0;
	bool c=0;

	cout<<(a && b || c)<<endl;
	cout<<(c || b && a)<<endl;

	return 0;
}