#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num = 0, arg = 0, count = 0, n = 5;
	scanf("%d", &num);
	arg = (-3 < num) ? (num < 6) ? num : num - num: num - num;
	printf("%d\n", arg);

	for (int i = 0; i < 5; i++) {
		if (i == 4) {
			num = num % 2;
		}
		else {
			num = num / 2;
		}
	}
	printf("%d", num);
	return 0;
}