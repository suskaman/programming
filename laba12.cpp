#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<direct.h>

int main() {
	FILE* list = fopen("list.txt", "a");
	char name[100];
	scanf("%[^\n]s", name);
	_mkdir(name);
	fprintf(list, "%s\n", name);
	fclose(list);
	return 0;
}
