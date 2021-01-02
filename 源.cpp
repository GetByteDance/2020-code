#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
double fun(int m)
{
	int i = 0;
	double sum = 0;
	for (i = 0; i <= m; i++)
	{
		sum += 1.0 / (i + 5);
	}
	return sum;
}
int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	printf("\nThe result is %1f\n", fun(n));
}
