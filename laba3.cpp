#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int numa, numb;
	scanf("%d", &numa);
	printf("%x - вывод в 16 сс\n", numa);
	printf("%o - вывод в 8 сс\n", numa);
	printf("%o - вывод в 8 сс и сдвиг вправо на 1\n", numa >> 1);
	printf("%o - вывод в 8 сс с побитовым отрицанием\n", ~numa);
	scanf("%d", &numb);
	printf("%o - операция исключающее или и вывод в 8 сс\n", numa ^ numb);
	return 0;
}
