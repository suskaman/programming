#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int numa, numb;
	scanf("%d", &numa);
	printf("%d\n", numa);
	printf("%x\n", numa);
	printf("%o\n", numa << 1);
	printf("%x\n", ~numa);
	scanf("%d", &numb);
	printf("%o\n", numa ^ numb);
	return 0;
}