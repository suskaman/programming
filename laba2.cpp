#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	long float a, z1, z2;
	scanf("%f", &a);

	z1 = 1 - 1 / 4 * pow(sin(2 * a), 2) + cos(2 * a);
	printf("%f\n", z1);

	z2 = pow(cos(a), 2) + pow(cos(a), 4);

	printf("%f", z2);
	return 0;
}