#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
enum music
{
	classic,
	pop,
	rock,
	rap,
	new_age,
	electro
};

struct geometry
{
	int X1, Y1;
	int X2, Y2;
};

struct ADSL
{
	unsigned int DSL : 1;
	unsigned int PPP : 1;
	unsigned int Link : 1;
};

union myunion
{
	struct ADSL b;
	short i;
};

int main() {
	//задание 1
	enum music a;
	a = rock;
	printf("%d\n", a);

	//задание 2
	struct geometry ans = { 1,1,5,1 };
	float length;
	int num = ans.X1 - ans.X2, num2 = ans.Y1 - ans.Y2;
	length = sqrt(num * num + num2 * num2);
	printf("%f\n", length);

	// задание 3
	union myunion t;
	scanf("%x", &t.i);
	printf("%d\n", t.b.DSL);
	printf("%d\n", t.b.PPP);
	printf("%d\n", t.b.Link);
	return 0;

	
	return 0;
}