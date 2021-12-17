#ifndef MY_RHOMB
#define MY_RHOMB

struct rhomb {
	float x1, x2, y1, y2, z1, z2, w1, w2;
};

float R_square(struct rhomb value);
float R_perimeter(struct rhomb value);
#endif // MY_RHOMB
