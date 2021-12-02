#include<math.h>
#include "my_rhomb.h"

float R_square(struct rhomb coord) {
	float BD, AC;
	BD = sqrt(pow((coord.x1 - coord.z1) / 2, 2) + pow((coord.x2 - coord.z2) / 2, 2));
	AC = sqrt(pow((coord.y1 - coord.w1) / 2, 2) + pow((coord.y2 - coord.w2) / 2, 2));
	return  0.5 * AC * BD;
}
float R_perimeter(struct rhomb coord) {
	float AB, BC, CD, DA;
	AB = sqrt(pow((coord.x1 - coord.y1) / 2, 2) + pow((coord.x2 - coord.y2) / 2, 2));
	BC = sqrt(pow((coord.y1 - coord.z1) / 2, 2) + pow((coord.y2 - coord.z2) / 2, 2));
	CD = sqrt(pow((coord.z1 - coord.w1) / 2, 2) + pow((coord.z2 - coord.w2) / 2, 2));
	DA = sqrt(pow((coord.w1 - coord.x1) / 2, 2) + pow((coord.w2 - coord.x2) / 2, 2));
	return AB + BC + CD + DA;
}

struct rhomb create_struct(struct rhomb coord) {
	coord.x1 = 1;
	coord.x2 = 6;
	coord.y1 = 4;
	coord.y2 = 10;
	coord.z1 = 7;
	coord.z2 = 6;
	coord.w1 = 4;
	coord.w2 = 2;
	return coord;
}