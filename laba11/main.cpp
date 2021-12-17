#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"my_rhomb.h" 

int main() {
	struct rhomb value = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };
	printf("X1 = ");
	scanf(" %f", &value.x1);
	printf("X2 = ");
	scanf(" %f", &value.x2);
	printf("Y1 = ");
	scanf(" %f", &value.y1);
	printf("Y2 = ");
	scanf(" %f", &value.y2);
	printf("Z1 = ");
	scanf(" %f", &value.z1);
	printf("Z2 = ");
	scanf(" %f", &value.z2);
	printf("W1 = ");
	scanf(" %f", &value.w1);
	printf("W2 = ");
	scanf(" %f", &value.w2);

	float perimeter = R_perimeter(value);
	float square = R_square(value);
	printf("SQUARE = %f\n", square);
	printf("PERIMETER = %f", perimeter);
	return 0;
}
