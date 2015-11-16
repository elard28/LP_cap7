#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int t1 = 3+5*6;//precedencia a la *
    int t2 = 3*5+6;
    int t3 = (3+5)*6;//asociatividad
    int t4 = 3*5+4+10/2;//precedencia a la / y *
    int t5 = 6*10/3;//izquierda a derecha
    int t6 = 10/3*6;//izquierda a derecha

    cout <<t1<< endl;
    cout <<t2<< endl;
    cout <<t3<< endl;
    cout <<t4<< endl;
    cout <<t5<< endl;
    cout <<t6<< endl;

	bool a=1;
	bool b=0;
	bool c=0;

	cout<<(a && b || c)<<endl;
	cout<<(c || b && a)<<endl;

	return 0;
}