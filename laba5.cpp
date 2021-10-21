#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
	int arr[9] = {99, 88, 77, 66, 55, 44, 33, 22, 11};
	int mat[2][2] = {1, 1, 1, 4};
	int mat2[2][2] = {1, 2, 4, 1};
	int ans[2][2] = {0};

	printf("myarray:\n");
	for (int i = 0; i < 9; i++) {
		printf("%d", arr[i]);
		printf(" ");
	}
	printf("\n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 2; k++) {
				ans[i][j] += mat[i][k] * mat2[k][j];
			}
		}
	}
	for(int x = 0; x < 2; x++) {
		for (int y = 0; y < 2; y++) {
			printf("%d", ans[x][y]);
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
