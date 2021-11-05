#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
	char copys[100];
	char str[100];
	char str_2[90];	
	scanf("%[^\n]s\n", str);
    scanf("%[^\n]s\n", str_2);
	strcpy(copys, str);

	printf("5 - copy - %s\n", copys);
	printf("7 - length - %d\n", strlen(str));
	printf("9 - search - %s\n", strrchr(str,'c'));
	printf("11 - lengthchar - %d\n", strcspn(str,str_2));
	printf("13 - 13\n");
	char* temp = strtok(str, "-");
	while (temp != NULL) {
		printf("%s\n", temp);
		temp = strtok(NULL,"-");
	}
	return 0;
}