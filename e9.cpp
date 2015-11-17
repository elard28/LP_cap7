#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int ai=3;
	int bi=2;
	int ci=1;

	float af=3.0;
	float bf=2.0;
	float cf=1.0;

	clock_t t_ini, t_fin;
	double tint=0;
	double tfloat=0;

	int count=10000;

	for (int i = 0; i < count; ++i)
	{
		t_ini = clock();
		ai=ai+bi-ci;
		bi=ai*ci;
		ci=ai/2;
		t_fin = clock();
    	tint += (double)(t_fin - t_ini) / CLOCKS_PER_SEC;
	}

	for (int i = 0; i < count; ++i)
	{
		t_ini = clock();
		af=af+bf-cf;
		bf=af*cf;
		cf=af/2.0;
		t_fin = clock();
    	tfloat += (double)(t_fin - t_ini) / CLOCKS_PER_SEC;
	}

	cout<<"INT:   "<<tint<<endl; //demora mas
	cout<<"FLOAT: "<<tfloat<<endl;

	return 0;
}