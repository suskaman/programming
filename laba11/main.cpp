
#define _CRT_SUCURE_NO_WARNINGS
#include<stdio.h>
#include"my_rhomb.h"

int main() {
	struct rhomb value = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };
	value = create_struct(value);
	float perimeter = R_perimeter(value);
	float square = R_square(value);
	printf("SQUARE = %f\n", square);
	printf("PERIMETER = %f", perimeter);
	return 0;
}
