#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Rus");
    //������� 1
	int i = 0;  
    printf("������� ������: ");
    do
        ++i;
    while (getchar() != '\n');
    printf("%d\n", i - 1);
     
    printf("-----------\n");
    //������� 5
    int summ, month;
    float now, per;
    printf("������� ����� ����� ������� �����:");
    scanf(" %d", &summ);
    printf("������� ���������� ������:");
    scanf(" %f", &per);
    printf("������� ���������� �������:");
    scanf(" %d", &month);
    per = per / 100;
    now = summ;
    for (int i = 0; i < month; i++) {
        now = (now * (1 + per));
        printf("� %d ����� ����� ������� ������ ����� ����� %f\n", i+1, now);
    }
	return 0;
}