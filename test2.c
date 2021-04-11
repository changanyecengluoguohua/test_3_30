#include<stdio.h>
int main()
{
	int sign = 1;
	double sum = 1.0;
	double fengzi = 2.0;
	double term = 0;
	for (fengzi = 2.0; fengzi <= 3; fengzi++)
	{
		sign = (-1)*sign;
		term = sign*(1 / fengzi);
		sum = sum + term;
	}
	printf("sum = %f\n", sum);
	return 0;
}