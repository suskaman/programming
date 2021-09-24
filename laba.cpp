#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	char str[101] = "";
	scanf("%d\n", &num);
	scanf("%[^\n]s", str);
	printf("%d\n", num);
	printf("%s", str);
	return 0;
}
