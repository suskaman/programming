#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	float a, z1, z2, z3, z4, z5;
	scanf("%f", &a);
	z1 = 1 - 1 / 4 * pow(sin(2 * a), 2) + cos(2 * a);
	z2 = pow(cos(a), 2) + pow(cos(a), 4);
	z3 = pow(a, 5);
	z4 = cos(a);
	z5 = sqrt(a);
	printf("%f\n%f\n%f\n%f\n%f", z1,z2,z3,z4,z5);
	return 0;
}
