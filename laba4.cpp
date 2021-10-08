#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num = 0, arg = 0, count = 0, n = 5;
	scanf("%d", &num);
	arg = (-3 < num) ? (num < 6) ? num : num - num: num - num;
	printf("%d\n", arg);
	printf("%d", (num >> 4) % 2); 
	return 0;
}
