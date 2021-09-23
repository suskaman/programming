#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	char str[102] = "";

	scanf("%d\n", &num);
	fgets(str, 102, stdin);

	printf("%d\n", num);
	puts(str);
	return 0;
}