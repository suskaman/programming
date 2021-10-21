#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
	int arr[9] = {99, 88, 77, 66, 55, 44, 33, 22, 11};
	printf("myarray:\n");
	for (int i = 0; i < 9; i++) {
		printf("%d", arr[i]);
		printf(" ");
	}
	return 0;
}