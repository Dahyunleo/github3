#include <stdio.h>
int factorial_rec(int n)
{
	
	if (n == 0||n==1) {
		return 1;
	}
	else {
		return n * factorial_rec(n - 1);
	}
}
int factorial_iter(int n)
{
	
	int result_iter = 1;
	for (n= 1; n <= 20; n++)
	{
		result_iter = result_iter * n;
	}
	return 0;
}
double main(int n) {
	 n = 20;

	double result_rec = factorial_rec(n);
	printf("Recursive factorial result:%f \n", result_rec);
	double result_iter = facorial_iter(n);
	
	printf("Iterative factorial result: %f \n", result_iter);
	return 0;
}
