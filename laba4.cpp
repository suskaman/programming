#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num = 0, arg = 0;
	scanf("%d", &num);
	arg = (-3 < num) ? (num < 6) ? num : 0: 0;
	printf("%d\n", arg);
	printf("%d", (num >> 5) % 2); 
	return 0;
}
