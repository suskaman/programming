#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int numa, numb;
	scanf("%d", &numa);
	printf("%d\n", numa, " - вывод в 10 сс"); 
	printf("%x\n", numa, " - вывод в 16 сс"); 
	printf("%o\n", numa << 1, " - вывод в 16 сс и сдвиг влево на 1"); 
	printf("%x\n", ~numa, " - вывод в 16 сс с побитовым отрицанием"); 
	scanf("%d", &numb);
	printf("%o\n", numa ^ numb, " - операция исключающее или"); 
	return 0;
}
