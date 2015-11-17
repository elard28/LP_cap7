#include <stdlib.h>
#include <stdio.h>

int fun(int *k) 
{
	*k += 4;
	return 3 * (*k) - 1;
}

int main(int argc, char const *argv[])
{
	int i = 10, j = 10, sum1, sum2;
	sum1 = (i / 2) + fun(&i); //46
	sum2 = fun(&j) + (j / 2); //48

	printf("sum1:%d , sum2:%d\n", sum1,sum2);
	return 0;
}