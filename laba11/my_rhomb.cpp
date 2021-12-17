#include<math.h>
#include "my_rhomb.h"

float R_square(struct rhomb с) {
	float BD, AC;
	BD = sqrt(pow((с.x1 - с.z1), 2) + pow((с.x2 - с.z2), 2));
	AC = sqrt(pow((с.y1 - с.w1), 2) + pow((с.y2 - с.w2), 2));
	return  0.5 * AC * BD;
}
float R_perimeter(struct rhomb с) {
	float AB, BC, CD, DA;
	AB = sqrt(pow((с.x1 - с.y1), 2) + pow((с.x2 - с.y2), 2));
	BC = sqrt(pow((с.y1 - с.z1), 2) + pow((с.y2 - с.z2), 2));
	CD = sqrt(pow((с.z1 - с.w1), 2) + pow((с.z2 - с.w2), 2));
	DA = sqrt(pow((с.w1 - с.x1), 2) + pow((с.w2 - с.x2), 2));
	return AB + BC + CD + DA;
}
