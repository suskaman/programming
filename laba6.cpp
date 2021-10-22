#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

int main() {
	char arr[] = {'W','O','R','K'};
	char* ell;
	ell = arr;
	int n = sizeof(arr);
	for (int i = 0; i < n; i++) {
		printf("%c", ell[i]);
		printf(" ");
	}
	printf("\n");
	
	char* temp = (char*)malloc(n*sizeof(int));

	for (int i = 0; i < n; i++) {
		temp[i] = ell[i];
	}

	for (int i = 0; i < n; i++) {
		printf("%c", temp[i]);
		printf(" ");
	}
	free(temp);
	return 0;
}
